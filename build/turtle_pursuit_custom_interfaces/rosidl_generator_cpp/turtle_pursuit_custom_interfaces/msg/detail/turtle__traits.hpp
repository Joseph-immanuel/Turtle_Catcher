// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_pursuit_custom_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__TRAITS_HPP_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_pursuit_custom_interfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_pursuit_custom_interfaces
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

}  // namespace turtle_pursuit_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_pursuit_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_pursuit_custom_interfaces::msg::Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_pursuit_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_pursuit_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_pursuit_custom_interfaces::msg::Turtle & msg)
{
  return turtle_pursuit_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_pursuit_custom_interfaces::msg::Turtle>()
{
  return "turtle_pursuit_custom_interfaces::msg::Turtle";
}

template<>
inline const char * name<turtle_pursuit_custom_interfaces::msg::Turtle>()
{
  return "turtle_pursuit_custom_interfaces/msg/Turtle";
}

template<>
struct has_fixed_size<turtle_pursuit_custom_interfaces::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_pursuit_custom_interfaces::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_pursuit_custom_interfaces::msg::Turtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__TRAITS_HPP_
