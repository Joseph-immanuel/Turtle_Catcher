// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_custom_msg:srv/NavigateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_H_
#define TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/NavigateTurtle in the package turtlesim_custom_msg.
typedef struct turtlesim_custom_msg__srv__NavigateTurtle_Request
{
  float x_pose;
  float y_pose;
  float theta;
} turtlesim_custom_msg__srv__NavigateTurtle_Request;

// Struct for a sequence of turtlesim_custom_msg__srv__NavigateTurtle_Request.
typedef struct turtlesim_custom_msg__srv__NavigateTurtle_Request__Sequence
{
  turtlesim_custom_msg__srv__NavigateTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msg__srv__NavigateTurtle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/NavigateTurtle in the package turtlesim_custom_msg.
typedef struct turtlesim_custom_msg__srv__NavigateTurtle_Response
{
  bool navigation_result;
} turtlesim_custom_msg__srv__NavigateTurtle_Response;

// Struct for a sequence of turtlesim_custom_msg__srv__NavigateTurtle_Response.
typedef struct turtlesim_custom_msg__srv__NavigateTurtle_Response__Sequence
{
  turtlesim_custom_msg__srv__NavigateTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msg__srv__NavigateTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSG__SRV__DETAIL__NAVIGATE_TURTLE__STRUCT_H_
