// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice
#include "custom_interface_msgs/msg/detail/servo_camera_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interface_msgs/msg/detail/servo_camera_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interface_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
cdr_serialize(
  const custom_interface_msgs::msg::ServoCameraCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: servo_camera_angle_1
  cdr << ros_message.servo_camera_angle_1;
  // Member: servo_camera_angle_2
  cdr << ros_message.servo_camera_angle_2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interface_msgs::msg::ServoCameraCommand & ros_message)
{
  // Member: servo_camera_angle_1
  cdr >> ros_message.servo_camera_angle_1;

  // Member: servo_camera_angle_2
  cdr >> ros_message.servo_camera_angle_2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
get_serialized_size(
  const custom_interface_msgs::msg::ServoCameraCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: servo_camera_angle_1
  {
    size_t item_size = sizeof(ros_message.servo_camera_angle_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_camera_angle_2
  {
    size_t item_size = sizeof(ros_message.servo_camera_angle_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
max_serialized_size_ServoCameraCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: servo_camera_angle_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_camera_angle_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ServoCameraCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interface_msgs::msg::ServoCameraCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoCameraCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interface_msgs::msg::ServoCameraCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoCameraCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interface_msgs::msg::ServoCameraCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoCameraCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServoCameraCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _ServoCameraCommand__callbacks = {
  "custom_interface_msgs::msg",
  "ServoCameraCommand",
  _ServoCameraCommand__cdr_serialize,
  _ServoCameraCommand__cdr_deserialize,
  _ServoCameraCommand__get_serialized_size,
  _ServoCameraCommand__max_serialized_size
};

static rosidl_message_type_support_t _ServoCameraCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoCameraCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_interface_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interface_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interface_msgs::msg::ServoCameraCommand>()
{
  return &custom_interface_msgs::msg::typesupport_fastrtps_cpp::_ServoCameraCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interface_msgs, msg, ServoCameraCommand)() {
  return &custom_interface_msgs::msg::typesupport_fastrtps_cpp::_ServoCameraCommand__handle;
}

#ifdef __cplusplus
}
#endif
