// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msg:srv/NavigateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msg/srv/detail/navigate_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msg
{

namespace srv
{

namespace builder
{

class Init_NavigateTurtle_Request_theta
{
public:
  explicit Init_NavigateTurtle_Request_theta(::turtlesim_custom_msg::srv::NavigateTurtle_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msg::srv::NavigateTurtle_Request theta(::turtlesim_custom_msg::srv::NavigateTurtle_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::NavigateTurtle_Request msg_;
};

class Init_NavigateTurtle_Request_y_pose
{
public:
  explicit Init_NavigateTurtle_Request_y_pose(::turtlesim_custom_msg::srv::NavigateTurtle_Request & msg)
  : msg_(msg)
  {}
  Init_NavigateTurtle_Request_theta y_pose(::turtlesim_custom_msg::srv::NavigateTurtle_Request::_y_pose_type arg)
  {
    msg_.y_pose = std::move(arg);
    return Init_NavigateTurtle_Request_theta(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::NavigateTurtle_Request msg_;
};

class Init_NavigateTurtle_Request_x_pose
{
public:
  Init_NavigateTurtle_Request_x_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTurtle_Request_y_pose x_pose(::turtlesim_custom_msg::srv::NavigateTurtle_Request::_x_pose_type arg)
  {
    msg_.x_pose = std::move(arg);
    return Init_NavigateTurtle_Request_y_pose(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::NavigateTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::NavigateTurtle_Request>()
{
  return turtlesim_custom_msg::srv::builder::Init_NavigateTurtle_Request_x_pose();
}

}  // namespace turtlesim_custom_msg


namespace turtlesim_custom_msg
{

namespace srv
{

namespace builder
{

class Init_NavigateTurtle_Response_navigation_result
{
public:
  Init_NavigateTurtle_Response_navigation_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_custom_msg::srv::NavigateTurtle_Response navigation_result(::turtlesim_custom_msg::srv::NavigateTurtle_Response::_navigation_result_type arg)
  {
    msg_.navigation_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::srv::NavigateTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::srv::NavigateTurtle_Response>()
{
  return turtlesim_custom_msg::srv::builder::Init_NavigateTurtle_Response_navigation_result();
}

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__BUILDER_HPP_
