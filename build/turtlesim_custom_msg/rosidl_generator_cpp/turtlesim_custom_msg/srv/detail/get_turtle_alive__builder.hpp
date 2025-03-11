// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msg:srv/GetTurtleAlive.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msg/srv/detail/get_turtle_alive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msg
{

namespace srv
{

namespace builder
{

class Init_GetTurtleAlive_Request_request
{
public:
  Init_GetTurtleAlive_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_custom_msg::srv::GetTurtleAlive_Request request(::turtlesim_custom_msg::srv::GetTurtleAlive_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::GetTurtleAlive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::GetTurtleAlive_Request>()
{
  return turtlesim_custom_msg::srv::builder::Init_GetTurtleAlive_Request_request();
}

}  // namespace turtlesim_custom_msg


namespace turtlesim_custom_msg
{

namespace srv
{

namespace builder
{

class Init_GetTurtleAlive_Response_alive_turtles
{
public:
  Init_GetTurtleAlive_Response_alive_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_custom_msg::srv::GetTurtleAlive_Response alive_turtles(::turtlesim_custom_msg::srv::GetTurtleAlive_Response::_alive_turtles_type arg)
  {
    msg_.alive_turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::GetTurtleAlive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::GetTurtleAlive_Response>()
{
  return turtlesim_custom_msg::srv::builder::Init_GetTurtleAlive_Response_alive_turtles();
}

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__BUILDER_HPP_
