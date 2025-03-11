// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_custom_msg:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__TRAITS_HPP_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_custom_msg/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Turtle & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x_pose
  {
    out << "x_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pose, out);
    out << ", ";
  }

  // member: y_pose
  {
    out << "y_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pose, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: x_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pose, out);
    out << "\n";
  }

  // member: y_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pose, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turtle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtlesim_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_custom_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_custom_msg::msg::Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msg::msg::Turtle & msg)
{
  return turtlesim_custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msg::msg::Turtle>()
{
  return "turtlesim_custom_msg::msg::Turtle";
}

template<>
inline const char * name<turtlesim_custom_msg::msg::Turtle>()
{
  return "turtlesim_custom_msg/msg/Turtle";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_custom_msg::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_custom_msg::msg::Turtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__TURTLE__TRAITS_HPP_
