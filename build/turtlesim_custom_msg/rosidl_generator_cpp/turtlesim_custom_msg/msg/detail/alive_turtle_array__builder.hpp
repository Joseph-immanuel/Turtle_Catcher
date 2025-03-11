// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msg:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msg/msg/detail/alive_turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msg
{

namespace msg
{

namespace builder
{

class Init_AliveTurtleArray_turtles
{
public:
  Init_AliveTurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_custom_msg::msg::AliveTurtleArray turtles(::turtlesim_custom_msg::msg::AliveTurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msg::msg::AliveTurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msg::msg::AliveTurtleArray>()
{
  return turtlesim_custom_msg::msg::builder::Init_AliveTurtleArray_turtles();
}

}  // namespace turtlesim_custom_msg

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_
