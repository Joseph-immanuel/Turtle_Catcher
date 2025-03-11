// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_custom_msg:srv/GetTurtleAlive.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__STRUCT_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Request __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTurtleAlive_Request_
{
  using Type = GetTurtleAlive_Request_<ContainerAllocator>;

  explicit GetTurtleAlive_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  explicit GetTurtleAlive_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  // field types and members
  using _request_type =
    bool;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const bool & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Request
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Request
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTurtleAlive_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTurtleAlive_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTurtleAlive_Request_

// alias to use template instance with default allocator
using GetTurtleAlive_Request =
  turtlesim_custom_msg::srv::GetTurtleAlive_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_custom_msg


#ifndef _WIN32
# define DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Response __declspec(deprecated)
#endif

namespace turtlesim_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTurtleAlive_Response_
{
  using Type = GetTurtleAlive_Response_<ContainerAllocator>;

  explicit GetTurtleAlive_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alive_turtles = 0;
    }
  }

  explicit GetTurtleAlive_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alive_turtles = 0;
    }
  }

  // field types and members
  using _alive_turtles_type =
    int8_t;
  _alive_turtles_type alive_turtles;

  // setters for named parameter idiom
  Type & set__alive_turtles(
    const int8_t & _arg)
  {
    this->alive_turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Response
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_custom_msg__srv__GetTurtleAlive_Response
    std::shared_ptr<turtlesim_custom_msg::srv::GetTurtleAlive_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTurtleAlive_Response_ & other) const
  {
    if (this->alive_turtles != other.alive_turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTurtleAlive_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTurtleAlive_Response_

// alias to use template instance with default allocator
using GetTurtleAlive_Response =
  turtlesim_custom_msg::srv::GetTurtleAlive_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_custom_msg

namespace turtlesim_custom_msg
{

namespace srv
{

struct GetTurtleAlive
{
  using Request = turtlesim_custom_msg::srv::GetTurtleAlive_Request;
  using Response = turtlesim_custom_msg::srv::GetTurtleAlive_Response;
};

}  // namespace srv

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__STRUCT_HPP_
