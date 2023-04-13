// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_interface_msgs/msg/detail/servo_camera_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_interface_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoCameraCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_interface_msgs::msg::ServoCameraCommand(_init);
}

void ServoCameraCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_interface_msgs::msg::ServoCameraCommand *>(message_memory);
  typed_message->~ServoCameraCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoCameraCommand_message_member_array[2] = {
  {
    "servo_camera_angle_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs::msg::ServoCameraCommand, servo_camera_angle_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servo_camera_angle_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface_msgs::msg::ServoCameraCommand, servo_camera_angle_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoCameraCommand_message_members = {
  "custom_interface_msgs::msg",  // message namespace
  "ServoCameraCommand",  // message name
  2,  // number of fields
  sizeof(custom_interface_msgs::msg::ServoCameraCommand),
  ServoCameraCommand_message_member_array,  // message members
  ServoCameraCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoCameraCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoCameraCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoCameraCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_interface_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interface_msgs::msg::ServoCameraCommand>()
{
  return &::custom_interface_msgs::msg::rosidl_typesupport_introspection_cpp::ServoCameraCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interface_msgs, msg, ServoCameraCommand)() {
  return &::custom_interface_msgs::msg::rosidl_typesupport_introspection_cpp::ServoCameraCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
