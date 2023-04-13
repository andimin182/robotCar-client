// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface_msgs__msg__ServoCameraCommand __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface_msgs__msg__ServoCameraCommand __declspec(deprecated)
#endif

namespace custom_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoCameraCommand_
{
  using Type = ServoCameraCommand_<ContainerAllocator>;

  explicit ServoCameraCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_camera_angle_1 = 0l;
      this->servo_camera_angle_2 = 0l;
    }
  }

  explicit ServoCameraCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_camera_angle_1 = 0l;
      this->servo_camera_angle_2 = 0l;
    }
  }

  // field types and members
  using _servo_camera_angle_1_type =
    int32_t;
  _servo_camera_angle_1_type servo_camera_angle_1;
  using _servo_camera_angle_2_type =
    int32_t;
  _servo_camera_angle_2_type servo_camera_angle_2;

  // setters for named parameter idiom
  Type & set__servo_camera_angle_1(
    const int32_t & _arg)
  {
    this->servo_camera_angle_1 = _arg;
    return *this;
  }
  Type & set__servo_camera_angle_2(
    const int32_t & _arg)
  {
    this->servo_camera_angle_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface_msgs__msg__ServoCameraCommand
    std::shared_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface_msgs__msg__ServoCameraCommand
    std::shared_ptr<custom_interface_msgs::msg::ServoCameraCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoCameraCommand_ & other) const
  {
    if (this->servo_camera_angle_1 != other.servo_camera_angle_1) {
      return false;
    }
    if (this->servo_camera_angle_2 != other.servo_camera_angle_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoCameraCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoCameraCommand_

// alias to use template instance with default allocator
using ServoCameraCommand =
  custom_interface_msgs::msg::ServoCameraCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__SERVO_CAMERA_COMMAND__STRUCT_HPP_
