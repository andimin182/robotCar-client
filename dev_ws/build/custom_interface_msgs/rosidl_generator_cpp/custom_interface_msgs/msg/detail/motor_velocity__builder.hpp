// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_

#include "custom_interface_msgs/msg/detail/motor_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorVelocity_right_lower_wheel_vel
{
public:
  explicit Init_MotorVelocity_right_lower_wheel_vel(::custom_interface_msgs::msg::MotorVelocity & msg)
  : msg_(msg)
  {}
  ::custom_interface_msgs::msg::MotorVelocity right_lower_wheel_vel(::custom_interface_msgs::msg::MotorVelocity::_right_lower_wheel_vel_type arg)
  {
    msg_.right_lower_wheel_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface_msgs::msg::MotorVelocity msg_;
};

class Init_MotorVelocity_right_upper_wheel_vel
{
public:
  explicit Init_MotorVelocity_right_upper_wheel_vel(::custom_interface_msgs::msg::MotorVelocity & msg)
  : msg_(msg)
  {}
  Init_MotorVelocity_right_lower_wheel_vel right_upper_wheel_vel(::custom_interface_msgs::msg::MotorVelocity::_right_upper_wheel_vel_type arg)
  {
    msg_.right_upper_wheel_vel = std::move(arg);
    return Init_MotorVelocity_right_lower_wheel_vel(msg_);
  }

private:
  ::custom_interface_msgs::msg::MotorVelocity msg_;
};

class Init_MotorVelocity_left_lower_wheel_vel
{
public:
  explicit Init_MotorVelocity_left_lower_wheel_vel(::custom_interface_msgs::msg::MotorVelocity & msg)
  : msg_(msg)
  {}
  Init_MotorVelocity_right_upper_wheel_vel left_lower_wheel_vel(::custom_interface_msgs::msg::MotorVelocity::_left_lower_wheel_vel_type arg)
  {
    msg_.left_lower_wheel_vel = std::move(arg);
    return Init_MotorVelocity_right_upper_wheel_vel(msg_);
  }

private:
  ::custom_interface_msgs::msg::MotorVelocity msg_;
};

class Init_MotorVelocity_left_upper_wheel_vel
{
public:
  Init_MotorVelocity_left_upper_wheel_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorVelocity_left_lower_wheel_vel left_upper_wheel_vel(::custom_interface_msgs::msg::MotorVelocity::_left_upper_wheel_vel_type arg)
  {
    msg_.left_upper_wheel_vel = std::move(arg);
    return Init_MotorVelocity_left_lower_wheel_vel(msg_);
  }

private:
  ::custom_interface_msgs::msg::MotorVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface_msgs::msg::MotorVelocity>()
{
  return custom_interface_msgs::msg::builder::Init_MotorVelocity_left_upper_wheel_vel();
}

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__BUILDER_HPP_
