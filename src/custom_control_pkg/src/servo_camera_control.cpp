#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custom_interface_msgs/msg/servo_camera_command.hpp"
#include "custom_interface_msgs/msg/co_g.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"


using namespace std::chrono_literals;
using std::placeholders::_1;

class ServoCameraControl : public rclcpp::Node
{
public:
    ServoCameraControl()
        : Node("servo_camera_control_node"), imageHeight_(0.0), imageWidth_(0.0), servoCommand1_(0), servoCommand2_(0), servoCommand1Prev_(90), servoCommand2Prev_(90)
    {
        /* Define parameters*/
        this -> declare_parameter<int>("errTol", 35);
        this -> declare_parameter<int>("dAng", 1);
        this -> declare_parameter<int>("servoCameraUpperLimit", 180);
        this -> declare_parameter<int>("servoCameraLowerLimit", 0);
        /* Retrieve parames from colorDetector node*/
        auto parameters_client = std::make_shared<rclcpp::SyncParametersClient>(this, "color_detection_node");
        while(!parameters_client->wait_for_service(std::chrono::seconds(1))) {
            if(!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the colorDetector node. Exiting...");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "colorDetector Node not available, waiting again...");
        }
        auto colorDetector_params = parameters_client->get_parameters({"imageWidth", "imageHeight"});
        if(colorDetector_params.size() != 2) {
            RCLCPP_ERROR(this->get_logger(), "Failed to retrieve colorDetector node params...");
                return;
        }else{
            imageWidth_ = colorDetector_params[0].as_double();
            imageHeight_ = colorDetector_params[1].as_double();
        }
        

        /* Publish on the /servoCameraCommand topic the servo camera commands.*/
        publisher_ = this->create_publisher<custom_interface_msgs::msg::ServoCameraCommand>("/servoCameraCommand", 10);
        /* Subscribe to the /imageDetectedCoG topic from the colorDetector node to acquire color image CoG informations.*/
        subscription_ = this->create_subscription<custom_interface_msgs::msg::CoG>(
            "imageDetectedCoG", 10, std::bind(&ServoCameraControl::servo_camera_command_callback, this, _1));
        timer_ = this->create_wall_timer(
            500ms, std::bind(&ServoCameraControl::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = custom_interface_msgs::msg::ServoCameraCommand();
        message.servo_camera_angle_1 = servoCommand1_;
        message.servo_camera_angle_2 = servoCommand2_;
        RCLCPP_INFO(this->get_logger(), "Publishing: servo_command_1: '%d', servo_command_2: '%d'", message.servo_camera_angle_1, message.servo_camera_angle_2);
        publisher_->publish(message);
    }

    void servo_camera_command_callback(const custom_interface_msgs::msg::CoG::SharedPtr CoGTarget)
    {

        RCLCPP_INFO(this->get_logger(), "Received targets: %d, %d", CoGTarget->position_x, CoGTarget->position_y);
        // Retrieve node params
        rclcpp::Parameter errTol_param = this->get_parameter("errTol");
        rclcpp::Parameter dAng_param = this->get_parameter("dAng");
        rclcpp::Parameter upperLimit_param = this->get_parameter("servoCameraUpperLimit");
        rclcpp::Parameter lowerLimit_param = this->get_parameter("servoCameraLowerLimit");

        int errTol = errTol_param.as_int();
        int dAng = dAng_param.as_int();
        int upperLimit = upperLimit_param.as_int();
        int lowerLimit = lowerLimit_param.as_int();
        
        // Compute error
        double err_x = CoGTarget->position_x - imageWidth_/2;
        double err_y = CoGTarget->position_y - imageHeight_/2;
        std::cout << "Error on X axis is: " << err_x << std::endl; 
        std::cout << "Error on Y axis is: " << err_y << std::endl;

        // Servo1 camera command
        if(std::abs(err_x) > errTol) {
            if(err_x > 0){
                servoCommand1_ = command_saturation(servoCommand1Prev_ + dAng, upperLimit, lowerLimit);
                servoCommand1Prev_ = servoCommand1_;
            }
            else{
                servoCommand1_ = command_saturation(servoCommand1Prev_ - dAng, upperLimit, lowerLimit);
                servoCommand1Prev_ = servoCommand1_;
            }
        }
        else{
            servoCommand1_ = command_saturation(servoCommand1Prev_, upperLimit, lowerLimit);
        }

        // Servo2 camera command
        if(std::abs(err_y) > errTol) {
            if(err_y > 0){
                servoCommand2_ = command_saturation(servoCommand2Prev_ - dAng, upperLimit, lowerLimit);
                servoCommand2Prev_ = servoCommand2_;
            }
            else{
                servoCommand2_ = command_saturation(servoCommand2Prev_ + dAng, upperLimit, lowerLimit);
                servoCommand2Prev_ = servoCommand2_;
            }
        }
        else{
            servoCommand1_ = command_saturation(servoCommand1Prev_, upperLimit, lowerLimit);
        }
    }

    int command_saturation(int command, const int upperLimit, const int lowerLimit){
        if(command>upperLimit) {
            command = upperLimit;
        }
        if(command<lowerLimit){
            command = lowerLimit;
        }

        return command;
    }

    
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<custom_interface_msgs::msg::CoG>::SharedPtr subscription_;
    rclcpp::Publisher<custom_interface_msgs::msg::ServoCameraCommand>::SharedPtr publisher_;
    double imageHeight_;
    double imageWidth_;
    int servoCommand1_;
    int servoCommand2_;
    int servoCommand1Prev_;
    int servoCommand2Prev_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ServoCameraControl>());
    rclcpp::shutdown();
    return 0;
}