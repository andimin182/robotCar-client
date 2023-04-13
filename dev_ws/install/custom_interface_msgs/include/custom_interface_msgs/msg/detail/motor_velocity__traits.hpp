// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__TRAITS_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__TRAITS_HPP_

#include "custom_interface_msgs/msg/detail/motor_velocity__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface_msgs::msg::MotorVelocity>()
{
  return "custom_interface_msgs::msg::MotorVelocity";
}

template<>
inline const char * name<custom_interface_msgs::msg::MotorVelocity>()
{
  return "custom_interface_msgs/msg/MotorVelocity";
}

template<>
struct has_fixed_size<custom_interface_msgs::msg::MotorVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface_msgs::msg::MotorVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface_msgs::msg::MotorVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__TRAITS_HPP_
