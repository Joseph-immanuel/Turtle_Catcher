// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msg:srv/KillTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msg/srv/detail/kill_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msg
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
  ::turtlesim_custom_msg::srv::KillTurtle_Request name(::turtlesim_custom_msg::srv::KillTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::KillTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::KillTurtle_Request>()
{
  return turtlesim_custom_msg::srv::builder::Init_KillTurtle_Request_name();
}

}  // namespace turtlesim_custom_msg


namespace turtlesim_custom_msg
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
  ::turtlesim_custom_msg::srv::KillTurtle_Response success(::turtlesim_custom_msg::srv::KillTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::KillTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::KillTurtle_Response>()
{
  return turtlesim_custom_msg::srv::builder::Init_KillTurtle_Response_success();
}

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
