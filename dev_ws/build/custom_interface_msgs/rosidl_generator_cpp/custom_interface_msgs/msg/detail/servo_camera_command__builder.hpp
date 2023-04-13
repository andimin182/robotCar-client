// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__BUILDER_HPP_

#include "custom_interface_msgs/msg/detail/servo_camera_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoCameraCommand_servo_camera_angle_2
{
public:
  explicit Init_ServoCameraCommand_servo_camera_angle_2(::custom_interface_msgs::msg::ServoCameraCommand & msg)
  : msg_(msg)
  {}
  ::custom_interface_msgs::msg::ServoCameraCommand servo_camera_angle_2(::custom_interface_msgs::msg::ServoCameraCommand::_servo_camera_angle_2_type arg)
  {
    msg_.servo_camera_angle_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface_msgs::msg::ServoCameraCommand msg_;
};

class Init_ServoCameraCommand_servo_camera_angle_1
{
public:
  Init_ServoCameraCommand_servo_camera_angle_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoCameraCommand_servo_camera_angle_2 servo_camera_angle_1(::custom_interface_msgs::msg::ServoCameraCommand::_servo_camera_angle_1_type arg)
  {
    msg_.servo_camera_angle_1 = std::move(arg);
    return Init_ServoCameraCommand_servo_camera_angle_2(msg_);
  }

private:
  ::custom_interface_msgs::msg::ServoCameraCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface_msgs::msg::ServoCameraCommand>()
{
  return custom_interface_msgs::msg::builder::Init_ServoCameraCommand_servo_camera_angle_1();
}

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__BUILDER_HPP_
