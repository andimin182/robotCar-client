// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface_msgs/msg/detail/servo_camera_command__rosidl_typesupport_introspection_c.h"
#include "custom_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface_msgs/msg/detail/servo_camera_command__functions.h"
#include "custom_interface_msgs/msg/detail/servo_camera_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface_msgs__msg__ServoCameraCommand__init(message_memory);
}

void ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_fini_function(void * message_memory)
{
  custom_interface_msgs__msg__ServoCameraCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_member_array[2] = {
  {
    "servo_camera_angle_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs__msg__ServoCameraCommand, servo_camera_angle_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_camera_angle_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs__msg__ServoCameraCommand, servo_camera_angle_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_members = {
  "custom_interface_msgs__msg",  // message namespace
  "ServoCameraCommand",  // message name
  2,  // number of fields
  sizeof(custom_interface_msgs__msg__ServoCameraCommand),
  ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_member_array,  // message members
  ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_type_support_handle = {
  0,
  &ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface_msgs, msg, ServoCameraCommand)() {
  if (!ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_type_support_handle.typesupport_identifier) {
    ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoCameraCommand__rosidl_typesupport_introspection_c__ServoCameraCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
