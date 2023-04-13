// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface_msgs:msg/CoG.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_H_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CoG in the package custom_interface_msgs.
typedef struct custom_interface_msgs__msg__CoG
{
  int32_t position_x;
  int32_t position_y;
} custom_interface_msgs__msg__CoG;

// Struct for a sequence of custom_interface_msgs__msg__CoG.
typedef struct custom_interface_msgs__msg__CoG__Sequence
{
  custom_interface_msgs__msg__CoG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface_msgs__msg__CoG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_H_
