#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std::chrono_literals;


class MockCamera : public rclcpp::Node
{
  public:
    MockCamera()
    : Node("mock_camera_publisher"), count_(0)
    {
      publisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("mock_imageColorDetection", 10);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&MockCamera::publish_camera, this));
    }

  private:
    void publish_camera()
    {
      auto message = sensor_msgs::msg::CompressedImage();
      message.format = "png";

      // Load an image from file
      cv::Mat image = cv::imread("/root/dev_ws/src/mock_pkg/src/image.png");

      // Convert the image to a compressed format
      std::vector<uchar> compressed_image;
      cv::imencode(".png", image, compressed_image);
      
      message.data=compressed_image;
      count_ = count_ + 1;
      RCLCPP_INFO(this->get_logger(), "Publishing mock camera image: '%d'", count_);
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MockCamera>());
  rclcpp::shutdown();
  return 0;
}