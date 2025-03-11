// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_custom_msg:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__STRUCT_HPP_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__msg__Turtle __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__msg__Turtle __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Turtle_
{
  using Type = Turtle_<ContainerAllocator>;

  explicit Turtle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x_pose = 0.0f;
      this->y_pose = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit Turtle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x_pose = 0.0f;
      this->y_pose = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _x_pose_type =
    float;
  _x_pose_type x_pose;
  using _y_pose_type =
    float;
  _y_pose_type y_pose;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x_pose(
    const float & _arg)
  {
    this->x_pose = _arg;
    return *this;
  }
  Type & set__y_pose(
    const float & _arg)
  {
    this->y_pose = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__msg__Turtle
    std::shared_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__msg__Turtle
    std::shared_ptr<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turtle_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x_pose != other.x_pose) {
      return false;
    }
    if (this->y_pose != other.y_pose) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turtle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turtle_

// alias to use template instance with default allocator
using Turtle =
  turtlesim_custom_msg::msg::Turtle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__STRUCT_HPP_
