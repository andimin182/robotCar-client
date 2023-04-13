// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MotorCommand in the package custom_interface_msgs.
typedef struct custom_interface_msgs__msg__MotorCommand
{
  rosidl_runtime_c__String command;
} custom_interface_msgs__msg__MotorCommand;

// Struct for a sequence of custom_interface_msgs__msg__MotorCommand.
typedef struct custom_interface_msgs__msg__MotorCommand__Sequence
{
  custom_interface_msgs__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface_msgs__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
