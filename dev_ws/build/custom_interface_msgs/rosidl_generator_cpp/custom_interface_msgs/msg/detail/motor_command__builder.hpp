// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include "custom_interface_msgs/msg/detail/motor_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_command
{
public:
  Init_MotorCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface_msgs::msg::MotorCommand command(::custom_interface_msgs::msg::MotorCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface_msgs::msg::MotorCommand>()
{
  return custom_interface_msgs::msg::builder::Init_MotorCommand_command();
}

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
