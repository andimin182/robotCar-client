// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface_msgs__msg__MotorVelocity __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface_msgs__msg__MotorVelocity __declspec(deprecated)
#endif

namespace custom_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorVelocity_
{
  using Type = MotorVelocity_<ContainerAllocator>;

  explicit MotorVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_upper_wheel_vel = 0ll;
      this->left_lower_wheel_vel = 0ll;
      this->right_upper_wheel_vel = 0ll;
      this->right_lower_wheel_vel = 0ll;
    }
  }

  explicit MotorVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_upper_wheel_vel = 0ll;
      this->left_lower_wheel_vel = 0ll;
      this->right_upper_wheel_vel = 0ll;
      this->right_lower_wheel_vel = 0ll;
    }
  }

  // field types and members
  using _left_upper_wheel_vel_type =
    int64_t;
  _left_upper_wheel_vel_type left_upper_wheel_vel;
  using _left_lower_wheel_vel_type =
    int64_t;
  _left_lower_wheel_vel_type left_lower_wheel_vel;
  using _right_upper_wheel_vel_type =
    int64_t;
  _right_upper_wheel_vel_type right_upper_wheel_vel;
  using _right_lower_wheel_vel_type =
    int64_t;
  _right_lower_wheel_vel_type right_lower_wheel_vel;

  // setters for named parameter idiom
  Type & set__left_upper_wheel_vel(
    const int64_t & _arg)
  {
    this->left_upper_wheel_vel = _arg;
    return *this;
  }
  Type & set__left_lower_wheel_vel(
    const int64_t & _arg)
  {
    this->left_lower_wheel_vel = _arg;
    return *this;
  }
  Type & set__right_upper_wheel_vel(
    const int64_t & _arg)
  {
    this->right_upper_wheel_vel = _arg;
    return *this;
  }
  Type & set__right_lower_wheel_vel(
    const int64_t & _arg)
  {
    this->right_lower_wheel_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface_msgs__msg__MotorVelocity
    std::shared_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface_msgs__msg__MotorVelocity
    std::shared_ptr<custom_interface_msgs::msg::MotorVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorVelocity_ & other) const
  {
    if (this->left_upper_wheel_vel != other.left_upper_wheel_vel) {
      return false;
    }
    if (this->left_lower_wheel_vel != other.left_lower_wheel_vel) {
      return false;
    }
    if (this->right_upper_wheel_vel != other.right_upper_wheel_vel) {
      return false;
    }
    if (this->right_lower_wheel_vel != other.right_lower_wheel_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorVelocity_

// alias to use template instance with default allocator
using MotorVelocity =
  custom_interface_msgs::msg::MotorVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__MOTOR_VELOCITY__STRUCT_HPP_
