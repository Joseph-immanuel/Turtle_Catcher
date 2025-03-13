// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_pursuit_custom_interfaces:srv/KillTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_pursuit_custom_interfaces/srv/detail/kill_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_pursuit_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillTurtle_Request_name
{
public:
  Init_KillTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_pursuit_custom_interfaces::srv::KillTurtle_Request name(::turtle_pursuit_custom_interfaces::srv::KillTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::srv::KillTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_pursuit_custom_interfaces::srv::KillTurtle_Request>()
{
  return turtle_pursuit_custom_interfaces::srv::builder::Init_KillTurtle_Request_name();
}

}  // namespace turtle_pursuit_custom_interfaces


namespace turtle_pursuit_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillTurtle_Response_success
{
public:
  Init_KillTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_pursuit_custom_interfaces::srv::KillTurtle_Response success(::turtle_pursuit_custom_interfaces::srv::KillTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::srv::KillTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_pursuit_custom_interfaces::srv::KillTurtle_Response>()
{
  return turtle_pursuit_custom_interfaces::srv::builder::Init_KillTurtle_Response_success();
}

}  // namespace turtle_pursuit_custom_interfaces

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
