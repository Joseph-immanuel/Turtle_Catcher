// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_pursuit_custom_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_pursuit_custom_interfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_pursuit_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::turtle_pursuit_custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::turtle_pursuit_custom_interfaces::msg::Turtle theta(::turtle_pursuit_custom_interfaces::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_y_pose
{
public:
  explicit Init_Turtle_y_pose(::turtle_pursuit_custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y_pose(::turtle_pursuit_custom_interfaces::msg::Turtle::_y_pose_type arg)
  {
    msg_.y_pose = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_x_pose
{
public:
  explicit Init_Turtle_x_pose(::turtle_pursuit_custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y_pose x_pose(::turtle_pursuit_custom_interfaces::msg::Turtle::_x_pose_type arg)
  {
    msg_.x_pose = std::move(arg);
    return Init_Turtle_y_pose(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x_pose name(::turtle_pursuit_custom_interfaces::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x_pose(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_pursuit_custom_interfaces::msg::Turtle>()
{
  return turtle_pursuit_custom_interfaces::msg::builder::Init_Turtle_name();
}

}  // namespace turtle_pursuit_custom_interfaces

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
