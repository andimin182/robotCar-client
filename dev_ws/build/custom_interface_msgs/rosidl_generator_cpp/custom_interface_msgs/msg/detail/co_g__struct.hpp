// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface_msgs:msg/CoG.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_HPP_
#define CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface_msgs__msg__CoG __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface_msgs__msg__CoG __declspec(deprecated)
#endif

namespace custom_interface_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoG_
{
  using Type = CoG_<ContainerAllocator>;

  explicit CoG_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0l;
      this->position_y = 0l;
    }
  }

  explicit CoG_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0l;
      this->position_y = 0l;
    }
  }

  // field types and members
  using _position_x_type =
    int32_t;
  _position_x_type position_x;
  using _position_y_type =
    int32_t;
  _position_y_type position_y;

  // setters for named parameter idiom
  Type & set__position_x(
    const int32_t & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const int32_t & _arg)
  {
    this->position_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface_msgs::msg::CoG_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface_msgs::msg::CoG_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::CoG_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface_msgs::msg::CoG_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface_msgs__msg__CoG
    std::shared_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface_msgs__msg__CoG
    std::shared_ptr<custom_interface_msgs::msg::CoG_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoG_ & other) const
  {
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoG_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoG_

// alias to use template instance with default allocator
using CoG =
  custom_interface_msgs::msg::CoG_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface_msgs

#endif  // CUSTOM_INTERFACE_MSGS__MSG__DETAIL__CO_G__STRUCT_HPP_
