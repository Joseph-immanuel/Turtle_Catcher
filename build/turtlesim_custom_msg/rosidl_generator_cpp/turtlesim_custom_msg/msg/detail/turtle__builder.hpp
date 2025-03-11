// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msg:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msg/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msg
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::turtlesim_custom_msg::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msg::msg::Turtle theta(::turtlesim_custom_msg::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::msg::Turtle msg_;
};

class Init_Turtle_y_pose
{
public:
  explicit Init_Turtle_y_pose(::turtlesim_custom_msg::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y_pose(::turtlesim_custom_msg::msg::Turtle::_y_pose_type arg)
  {
    msg_.y_pose = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::turtlesim_custom_msg::msg::Turtle msg_;
};

class Init_Turtle_x_pose
{
public:
  explicit Init_Turtle_x_pose(::turtlesim_custom_msg::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y_pose x_pose(::turtlesim_custom_msg::msg::Turtle::_x_pose_type arg)
  {
    msg_.x_pose = std::move(arg);
    return Init_Turtle_y_pose(msg_);
  }

private:
  ::turtlesim_custom_msg::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x_pose name(::turtlesim_custom_msg::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x_pose(msg_);
  }

private:
  ::turtlesim_custom_msg::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::msg::Turtle>()
{
  return turtlesim_custom_msg::msg::builder::Init_Turtle_name();
}

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__BUILDER_HPP_
