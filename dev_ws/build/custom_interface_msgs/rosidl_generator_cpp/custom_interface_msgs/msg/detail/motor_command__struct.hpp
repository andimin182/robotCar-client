// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface_msgs__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface_msgs__msg__MotorCommand __declspec(deprecated)
#endif

namespace custom_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface_msgs__msg__MotorCommand
    std::shared_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface_msgs__msg__MotorCommand
    std::shared_ptr<custom_interface_msgs::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  custom_interface_msgs::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_