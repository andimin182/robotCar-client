// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface_msgs:msg/CoG.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__BUILDER_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__BUILDER_HPP_

#include "custom_interface_msgs/msg/detail/co_g__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface_msgs
{

namespace msg
{

namespace builder
{

class Init_CoG_position_y
{
public:
  explicit Init_CoG_position_y(::custom_interface_msgs::msg::CoG & msg)
  : msg_(msg)
  {}
  ::custom_interface_msgs::msg::CoG position_y(::custom_interface_msgs::msg::CoG::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface_msgs::msg::CoG msg_;
};

class Init_CoG_position_x
{
public:
  Init_CoG_position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoG_position_y position_x(::custom_interface_msgs::msg::CoG::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_CoG_position_y(msg_);
  }

private:
  ::custom_interface_msgs::msg::CoG msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface_msgs::msg::CoG>()
{
  return custom_interface_msgs::msg::builder::Init_CoG_position_x();
}

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__BUILDER_HPP_
