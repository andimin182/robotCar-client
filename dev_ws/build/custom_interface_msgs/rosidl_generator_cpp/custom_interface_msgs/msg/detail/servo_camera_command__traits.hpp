// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__TRAITS_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__TRAITS_HPP_

#include "custom_interface_msgs/msg/detail/servo_camera_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface_msgs::msg::ServoCameraCommand>()
{
  return "custom_interface_msgs::msg::ServoCameraCommand";
}

template<>
inline const char * name<custom_interface_msgs::msg::ServoCameraCommand>()
{
  return "custom_interface_msgs/msg/ServoCameraCommand";
}

template<>
struct has_fixed_size<custom_interface_msgs::msg::ServoCameraCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface_msgs::msg::ServoCameraCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface_msgs::msg::ServoCameraCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__TRAITS_HPP_
