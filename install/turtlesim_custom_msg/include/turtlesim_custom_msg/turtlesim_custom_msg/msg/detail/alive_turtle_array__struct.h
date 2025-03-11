// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_custom_msg:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_
#define TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "turtlesim_custom_msg/msg/detail/turtle__struct.h"

/// Struct defined in msg/AliveTurtleArray in the package turtlesim_custom_msg.
typedef struct turtlesim_custom_msg__msg__AliveTurtleArray
{
  turtlesim_custom_msg__msg__Turtle__Sequence turtles;
} turtlesim_custom_msg__msg__AliveTurtleArray;

// Struct for a sequence of turtlesim_custom_msg__msg__AliveTurtleArray.
typedef struct turtlesim_custom_msg__msg__AliveTurtleArray__Sequence
{
  turtlesim_custom_msg__msg__AliveTurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msg__msg__AliveTurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSG__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_
