#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custom_interface_msgs/msg/co_g.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

static const std::string OPENCV_WINDOW = "Image window";
static const std::string MASK_WINDOW = "Mask window";

struct positionCoM {
  double position_x;
  double position_y;
};

class ColorDetector : public rclcpp::Node
{
public:
    ColorDetector()
        : Node("color_detection_node"), isParamInitialized_(false), CoG_(0,0), count_(0)
    {  
        /* Declare node parameters with null default values*/
        this -> declare_parameter<double>("imageHeight", 0.0);
        this -> declare_parameter<double>("imageWidth", 0.0);
        this -> declare_parameter<int>("minArea", 5000);
        this -> declare_parameter<int>("detectedColor", 1);

        /* Publish on the /imageDetectedCoG topic the CoG of the detected color figure.*/
        publisherCoG_ = this->create_publisher<custom_interface_msgs::msg::CoG>("/imageDetectedCoG", 10);
        /* Publish on the /imageColorDetection topic the new compressed image with detected bounds and CoG.*/
        publisherImageDetected_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/imageColorDetection", 10);
        /* Subscribe to the /image_raw/compressed topic from the v4l node to acquire image informations from Raspi Camera.*/
        subscriptionCameraRaspi_ = this->create_subscription<sensor_msgs::msg::CompressedImage>(
            "image_raw/compressed", 10, std::bind(&ColorDetector::image_callback, this, _1));
        timerCoG_ = this->create_wall_timer(
            500ms, std::bind(&ColorDetector::CoG_callback, this));
        timerImageDetected_ = this->create_wall_timer(
            500ms, std::bind(&ColorDetector::imageDetected_callback, this));
    }

private:
    void CoG_callback()
    {
        // First publisher
        auto messageCoG = custom_interface_msgs::msg::CoG();
        messageCoG.position_x = CoG_.x;
        messageCoG.position_y = CoG_.y;
        RCLCPP_INFO(this->get_logger(), "Publishing: CoG of detected color: '(%d, %d)'", messageCoG.position_x, messageCoG.position_y);
        publisherCoG_->publish(messageCoG);

    }

    void imageDetected_callback()
    {
        // Second publisher
        auto messageDetectedColorImage = sensor_msgs::msg::CompressedImage();
        messageDetectedColorImage.format = "png";
        // messageDetectedColorImage.data.assign(compressedRosImageData_.begin(), compressedRosImageData_.end());
        messageDetectedColorImage.data = compressedRosImageData_;
        RCLCPP_INFO(this->get_logger(), "Publishing image with detected color...");
        publisherImageDetected_->publish(messageDetectedColorImage);
    }

    void image_callback(const sensor_msgs::msg::CompressedImage::SharedPtr msgImageRos)
    {

        RCLCPP_INFO(this->get_logger(), "Received Image number: %d", count_++);
        /* Convert the ROS2 compressed image raw to opencv type image*/
        cv_bridge::CvImageConstPtr convertedImageCVptr = cv_bridge::toCvCopy(msgImageRos, "bgr8");

        // Retrieve image dimensions
        double width = convertedImageCVptr->image.size[1];
        double height = convertedImageCVptr->image.size[0];
        positionCoM imageCoG;
        imageCoG.position_x = width/2;
        imageCoG.position_y = height/2;

        // Initialize the parameters
        if(!isParamInitialized_){
            this->set_parameter(rclcpp::Parameter("imageHeight", height));
            this->set_parameter(rclcpp::Parameter("imageWidth", width));
            isParamInitialized_ = true;
        }

        // Call the color detection algorithm which return the geometric center of the detected RED object
        CoG_ = color_detection(convertedImageCVptr, imageCoG);

    }

    cv::Point color_detection(cv_bridge::CvImageConstPtr imageConvertedToCV, const positionCoM imagePositon) {
        // retrieve params
        rclcpp::Parameter min_area = this->get_parameter("minArea");
        rclcpp::Parameter detected_color = this->get_parameter("detectedColor");

        int minArea = min_area.as_int();
        int detectedColor = detected_color.as_int();
        
        cv::Mat img = imageConvertedToCV->image;
        cv::Mat originalImage;
        img.copyTo(originalImage);

        cv::Point CoG(imagePositon.position_x, imagePositon.position_y);
        //===================================================================================================
        // DETECT COLOR (red, blu, yellow for the moment)
        //===================================================================================================
        // Convert to HSV
        cv::Mat3b imgHSV;
        cv::cvtColor(img, imgHSV, cv::COLOR_BGR2HSV);

        // Define a red mask
        cv::Mat1b red_mask;
        cv::inRange(imgHSV, cv::Scalar(0, 70, 50), cv::Scalar(10, 255, 255), red_mask);
        cv::inRange(imgHSV, cv::Scalar(170, 70, 50), cv::Scalar(180, 255, 255), red_mask);

        // Define a blu mask
        cv::Mat1b blu_mask;
        cv::inRange(imgHSV, cv::Scalar(90, 50, 50), cv::Scalar(130, 255, 255), blu_mask);

        // Define a blu mask
        cv::Mat1b yellow_mask;
        cv::inRange(imgHSV, cv::Scalar(20, 100, 100), cv::Scalar(30, 255, 255), yellow_mask);
        
        
        cv::Mat1b mask;
        // It would be nice to switch color through a service and not a prameter!
        switch (detectedColor)
        {
        case 1:
            mask = red_mask;
            break;
        case 2:
            mask = yellow_mask;
            break;
        case 3:
            mask = blu_mask;
        break;
        default:
            mask = red_mask;
            break;
        }
        
        // Find the contours of the detected objects (according to color)
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

        // Filter the biggest contour
        /* we find the largest area between all the contours that we have found.*/
        double largest_area =0;
        int largest_contour_index =0;
        
        if(contours.size() >1){
            for( size_t i = 0; i< contours.size(); i++ ) {
                double area = cv::contourArea( contours[i] );  //  Find the area of contour
                if( area > largest_area )
                {
                largest_area = area;
                largest_contour_index = i;               //Store the index of largest contour
                }
            }

            cv::Rect boundRect = cv::boundingRect( contours[largest_contour_index] ); // Find the bounding rectangle for biggest contour
            // Draw the rectangle contour in green
            if(boundRect.area()>minArea){
                cv::rectangle(originalImage, boundRect.tl(), boundRect.br(), cv::Scalar(0,255,0), 3);
                // Draw the geometric center by using the circle() method
                // First define the point
                CoG.x = boundRect.x + boundRect.width/2;
                CoG.y = boundRect.y + boundRect.height/2;
            }
        }
        
        // Draw the intersects of CoG of image
        cv::Point yFinal(imagePositon.position_x, imagePositon.position_y*2), yInit(imagePositon.position_x, 0);
        cv::Point xInit(0, imagePositon.position_y), xFinal(imagePositon.position_x*2, imagePositon.position_y);
        cv::line(originalImage, yInit, yFinal, cv::Scalar(0,0,255), 1);
        cv::line(originalImage, xInit, xFinal, cv::Scalar(0,0,255), 1);

        cv::circle(originalImage, CoG, 2, cv::Scalar(0,255,0), 2);

        //===================================================================================================
        // DISPLAY the image with the detected object
        //===================================================================================================
        // cv::imshow(MASK_WINDOW, mask);
        cv::imshow(OPENCV_WINDOW, originalImage);
        cv::waitKey(3);

        //===================================================================================================
        // CONVERT the detect image to ROS image
        //===================================================================================================
        cv::imencode(".png", originalImage, compressedRosImageData_);

        return CoG;
    }
    
    bool isParamInitialized_;
    cv::Point CoG_;
    rclcpp::TimerBase::SharedPtr timerImageDetected_;
    rclcpp::TimerBase::SharedPtr timerCoG_;
    rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr subscriptionCameraRaspi_;
    rclcpp::Publisher<custom_interface_msgs::msg::CoG>::SharedPtr publisherCoG_;
    rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr publisherImageDetected_;
    size_t count_;
    std::vector<uchar> compressedRosImageData_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ColorDetector>());
    rclcpp::shutdown();
    return 0;
}