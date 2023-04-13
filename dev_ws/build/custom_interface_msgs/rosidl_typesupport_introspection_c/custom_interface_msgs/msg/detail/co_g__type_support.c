// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface_msgs:msg/CoG.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface_msgs/msg/detail/co_g__rosidl_typesupport_introspection_c.h"
#include "custom_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface_msgs/msg/detail/co_g__functions.h"
#include "custom_interface_msgs/msg/detail/co_g__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CoG__rosidl_typesupport_introspection_c__CoG_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface_msgs__msg__CoG__init(message_memory);
}

void CoG__rosidl_typesupport_introspection_c__CoG_fini_function(void * message_memory)
{
  custom_interface_msgs__msg__CoG__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoG__rosidl_typesupport_introspection_c__CoG_message_member_array[2] = {
  {
    "position_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs__msg__CoG, position_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs__msg__CoG, position_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoG__rosidl_typesupport_introspection_c__CoG_message_members = {
  "custom_interface_msgs__msg",  // message namespace
  "CoG",  // message name
  2,  // number of fields
  sizeof(custom_interface_msgs__msg__CoG),
  CoG__rosidl_typesupport_introspection_c__CoG_message_member_array,  // message members
  CoG__rosidl_typesupport_introspection_c__CoG_init_function,  // function to initialize message memory (memory has to be allocated)
  CoG__rosidl_typesupport_introspection_c__CoG_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoG__rosidl_typesupport_introspection_c__CoG_message_type_support_handle = {
  0,
  &CoG__rosidl_typesupport_introspection_c__CoG_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface_msgs, msg, CoG)() {
  if (!CoG__rosidl_typesupport_introspection_c__CoG_message_type_support_handle.typesupport_identifier) {
    CoG__rosidl_typesupport_introspection_c__CoG_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoG__rosidl_typesupport_introspection_c__CoG_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
