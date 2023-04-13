// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice
#include "custom_interface_msgs/msg/detail/motor_velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interface_msgs/msg/detail/motor_velocity__struct.hpp"

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
  const custom_interface_msgs::msg::MotorVelocity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_upper_wheel_vel
  cdr << ros_message.left_upper_wheel_vel;
  // Member: left_lower_wheel_vel
  cdr << ros_message.left_lower_wheel_vel;
  // Member: right_upper_wheel_vel
  cdr << ros_message.right_upper_wheel_vel;
  // Member: right_lower_wheel_vel
  cdr << ros_message.right_lower_wheel_vel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interface_msgs::msg::MotorVelocity & ros_message)
{
  // Member: left_upper_wheel_vel
  cdr >> ros_message.left_upper_wheel_vel;

  // Member: left_lower_wheel_vel
  cdr >> ros_message.left_lower_wheel_vel;

  // Member: right_upper_wheel_vel
  cdr >> ros_message.right_upper_wheel_vel;

  // Member: right_lower_wheel_vel
  cdr >> ros_message.right_lower_wheel_vel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
get_serialized_size(
  const custom_interface_msgs::msg::MotorVelocity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_upper_wheel_vel
  {
    size_t item_size = sizeof(ros_message.left_upper_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_lower_wheel_vel
  {
    size_t item_size = sizeof(ros_message.left_lower_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_upper_wheel_vel
  {
    size_t item_size = sizeof(ros_message.right_upper_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_lower_wheel_vel
  {
    size_t item_size = sizeof(ros_message.right_lower_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interface_msgs
max_serialized_size_MotorVelocity(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: left_upper_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_lower_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_upper_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_lower_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MotorVelocity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interface_msgs::msg::MotorVelocity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorVelocity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interface_msgs::msg::MotorVelocity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorVelocity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interface_msgs::msg::MotorVelocity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorVelocity__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorVelocity(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorVelocity__callbacks = {
  "custom_interface_msgs::msg",
  "MotorVelocity",
  _MotorVelocity__cdr_serialize,
  _MotorVelocity__cdr_deserialize,
  _MotorVelocity__get_serialized_size,
  _MotorVelocity__max_serialized_size
};

static rosidl_message_type_support_t _MotorVelocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorVelocity__callbacks,
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
get_message_type_support_handle<custom_interface_msgs::msg::MotorVelocity>()
{
  return &custom_interface_msgs::msg::typesupport_fastrtps_cpp::_MotorVelocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interface_msgs, msg, MotorVelocity)() {
  return &custom_interface_msgs::msg::typesupport_fastrtps_cpp::_MotorVelocity__handle;
}

#ifdef __cplusplus
}
#endif
