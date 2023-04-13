// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_H_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ServoCameraCommand in the package custom_interface_msgs.
typedef struct custom_interface_msgs__msg__ServoCameraCommand
{
  int32_t servo_camera_angle_1;
  int32_t servo_camera_angle_2;
} custom_interface_msgs__msg__ServoCameraCommand;

// Struct for a sequence of custom_interface_msgs__msg__ServoCameraCommand.
typedef struct custom_interface_msgs__msg__ServoCameraCommand__Sequence
{
  custom_interface_msgs__msg__ServoCameraCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface_msgs__msg__ServoCameraCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_H_
