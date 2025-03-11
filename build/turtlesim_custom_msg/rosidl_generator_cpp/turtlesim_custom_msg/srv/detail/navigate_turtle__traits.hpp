// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_custom_msg:srv/NavigateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__TRAITS_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_custom_msg/srv/detail/navigate_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavigateTurtle_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  const NavigateTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const NavigateTurtle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_custom_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_custom_msg::srv::NavigateTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msg::srv::NavigateTurtle_Request & msg)
{
  return turtlesim_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msg::srv::NavigateTurtle_Request>()
{
  return "turtlesim_custom_msg::srv::NavigateTurtle_Request";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::NavigateTurtle_Request>()
{
  return "turtlesim_custom_msg/srv/NavigateTurtle_Request";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::NavigateTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::NavigateTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_custom_msg::srv::NavigateTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavigateTurtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: navigation_result
  {
    out << "navigation_result: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: navigation_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_result: ";
    rosidl_generator_traits::value_to_yaml(msg.navigation_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateTurtle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_custom_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_custom_msg::srv::NavigateTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msg::srv::NavigateTurtle_Response & msg)
{
  return turtlesim_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msg::srv::NavigateTurtle_Response>()
{
  return "turtlesim_custom_msg::srv::NavigateTurtle_Response";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::NavigateTurtle_Response>()
{
  return "turtlesim_custom_msg/srv/NavigateTurtle_Response";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::NavigateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::NavigateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_custom_msg::srv::NavigateTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_custom_msg::srv::NavigateTurtle>()
{
  return "turtlesim_custom_msg::srv::NavigateTurtle";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::NavigateTurtle>()
{
  return "turtlesim_custom_msg/srv/NavigateTurtle";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::NavigateTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_custom_msg::srv::NavigateTurtle_Request>::value &&
    has_fixed_size<turtlesim_custom_msg::srv::NavigateTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::NavigateTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_custom_msg::srv::NavigateTurtle_Request>::value &&
    has_bounded_size<turtlesim_custom_msg::srv::NavigateTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_custom_msg::srv::NavigateTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_custom_msg::srv::NavigateTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_custom_msg::srv::NavigateTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__TRAITS_HPP_
