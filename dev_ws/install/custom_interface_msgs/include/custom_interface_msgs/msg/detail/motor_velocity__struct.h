// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_H_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorVelocity in the package custom_interface_msgs.
typedef struct custom_interface_msgs__msg__MotorVelocity
{
  int64_t left_upper_wheel_vel;
  int64_t left_lower_wheel_vel;
  int64_t right_upper_wheel_vel;
  int64_t right_lower_wheel_vel;
} custom_interface_msgs__msg__MotorVelocity;

// Struct for a sequence of custom_interface_msgs__msg__MotorVelocity.
typedef struct custom_interface_msgs__msg__MotorVelocity__Sequence
{
  custom_interface_msgs__msg__MotorVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface_msgs__msg__MotorVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_H_
