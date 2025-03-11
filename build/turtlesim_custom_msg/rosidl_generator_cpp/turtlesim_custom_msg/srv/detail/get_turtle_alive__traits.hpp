// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_custom_msg:srv/GetTurtleAlive.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__TRAITS_HPP_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_custom_msg/srv/detail/get_turtle_alive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTurtleAlive_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTurtleAlive_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTurtleAlive_Request & msg, bool use_flow_style = false)
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
  const turtlesim_custom_msg::srv::GetTurtleAlive_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msg::srv::GetTurtleAlive_Request & msg)
{
  return turtlesim_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msg::srv::GetTurtleAlive_Request>()
{
  return "turtlesim_custom_msg::srv::GetTurtleAlive_Request";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::GetTurtleAlive_Request>()
{
  return "turtlesim_custom_msg/srv/GetTurtleAlive_Request";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::GetTurtleAlive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::GetTurtleAlive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_custom_msg::srv::GetTurtleAlive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTurtleAlive_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: alive_turtles
  {
    out << "alive_turtles: ";
    rosidl_generator_traits::value_to_yaml(msg.alive_turtles, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTurtleAlive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alive_turtles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alive_turtles: ";
    rosidl_generator_traits::value_to_yaml(msg.alive_turtles, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTurtleAlive_Response & msg, bool use_flow_style = false)
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
  const turtlesim_custom_msg::srv::GetTurtleAlive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msg::srv::GetTurtleAlive_Response & msg)
{
  return turtlesim_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msg::srv::GetTurtleAlive_Response>()
{
  return "turtlesim_custom_msg::srv::GetTurtleAlive_Response";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::GetTurtleAlive_Response>()
{
  return "turtlesim_custom_msg/srv/GetTurtleAlive_Response";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::GetTurtleAlive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::GetTurtleAlive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_custom_msg::srv::GetTurtleAlive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_custom_msg::srv::GetTurtleAlive>()
{
  return "turtlesim_custom_msg::srv::GetTurtleAlive";
}

template<>
inline const char * name<turtlesim_custom_msg::srv::GetTurtleAlive>()
{
  return "turtlesim_custom_msg/srv/GetTurtleAlive";
}

template<>
struct has_fixed_size<turtlesim_custom_msg::srv::GetTurtleAlive>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_custom_msg::srv::GetTurtleAlive_Request>::value &&
    has_fixed_size<turtlesim_custom_msg::srv::GetTurtleAlive_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_custom_msg::srv::GetTurtleAlive>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_custom_msg::srv::GetTurtleAlive_Request>::value &&
    has_bounded_size<turtlesim_custom_msg::srv::GetTurtleAlive_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_custom_msg::srv::GetTurtleAlive>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_custom_msg::srv::GetTurtleAlive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_custom_msg::srv::GetTurtleAlive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__GET_TURTLE_ALIVE__TRAITS_HPP_
