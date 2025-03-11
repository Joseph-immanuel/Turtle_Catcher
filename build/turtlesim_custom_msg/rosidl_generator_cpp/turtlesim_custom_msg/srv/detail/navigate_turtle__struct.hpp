// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_custom_msg:srv/NavigateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Request __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavigateTurtle_Request_
{
  using Type = NavigateTurtle_Request_<ContainerAllocator>;

  explicit NavigateTurtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pose = 0.0f;
      this->y_pose = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit NavigateTurtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pose = 0.0f;
      this->y_pose = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
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
    turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Request
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Request
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTurtle_Request_ & other) const
  {
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
  bool operator!=(const NavigateTurtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTurtle_Request_

// alias to use template instance with default allocator
using NavigateTurtle_Request =
  turtlesim_custom_msg::srv::NavigateTurtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_custom_msg


#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Response __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavigateTurtle_Response_
{
  using Type = NavigateTurtle_Response_<ContainerAllocator>;

  explicit NavigateTurtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_result = false;
    }
  }

  explicit NavigateTurtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_result = false;
    }
  }

  // field types and members
  using _navigation_result_type =
    bool;
  _navigation_result_type navigation_result;

  // setters for named parameter idiom
  Type & set__navigation_result(
    const bool & _arg)
  {
    this->navigation_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Response
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__srv__NavigateTurtle_Response
    std::shared_ptr<turtlesim_custom_msg::srv::NavigateTurtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateTurtle_Response_ & other) const
  {
    if (this->navigation_result != other.navigation_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateTurtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateTurtle_Response_

// alias to use template instance with default allocator
using NavigateTurtle_Response =
  turtlesim_custom_msg::srv::NavigateTurtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_custom_msg

namespace turtlesim_custom_msg
{

namespace srv
{

struct NavigateTurtle
{
  using Request = turtlesim_custom_msg::srv::NavigateTurtle_Request;
  using Response = turtlesim_custom_msg::srv::NavigateTurtle_Response;
};

}  // namespace srv

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_HPP_
