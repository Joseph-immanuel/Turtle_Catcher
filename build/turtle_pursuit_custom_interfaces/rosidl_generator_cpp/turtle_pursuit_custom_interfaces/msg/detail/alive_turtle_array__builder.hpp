// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_pursuit_custom_interfaces:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_pursuit_custom_interfaces/msg/detail/alive_turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_pursuit_custom_interfaces
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
  ::turtle_pursuit_custom_interfaces::msg::AliveTurtleArray turtles(::turtle_pursuit_custom_interfaces::msg::AliveTurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_pursuit_custom_interfaces::msg::AliveTurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_pursuit_custom_interfaces::msg::AliveTurtleArray>()
{
  return turtle_pursuit_custom_interfaces::msg::builder::Init_AliveTurtleArray_turtles();
}

}  // namespace turtle_pursuit_custom_interfaces

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__BUILDER_HPP_
