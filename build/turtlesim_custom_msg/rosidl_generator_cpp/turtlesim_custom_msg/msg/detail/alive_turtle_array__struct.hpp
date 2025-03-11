// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_custom_msg:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_HPP_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtles'
#include "turtlesim_custom_msg/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__msg__AliveTurtleArray __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__msg__AliveTurtleArray __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AliveTurtleArray_
{
  using Type = AliveTurtleArray_<ContainerAllocator>;

  explicit AliveTurtleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AliveTurtleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtles_type =
    std::vector<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>>;
  _turtles_type turtles;

  // setters for named parameter idiom
  Type & set__turtles(
    const std::vector<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_custom_msg::msg::Turtle_<ContainerAllocator>>> & _arg)
  {
    this->turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__msg__AliveTurtleArray
    std::shared_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__msg__AliveTurtleArray
    std::shared_ptr<turtlesim_custom_msg::msg::AliveTurtleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AliveTurtleArray_ & other) const
  {
    if (this->turtles != other.turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const AliveTurtleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AliveTurtleArray_

// alias to use template instance with default allocator
using AliveTurtleArray =
  turtlesim_custom_msg::msg::AliveTurtleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_HPP_
