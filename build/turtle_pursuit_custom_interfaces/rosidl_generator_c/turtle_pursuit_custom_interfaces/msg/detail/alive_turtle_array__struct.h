// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_pursuit_custom_interfaces:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_

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
#include "turtle_pursuit_custom_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/AliveTurtleArray in the package turtle_pursuit_custom_interfaces.
typedef struct turtle_pursuit_custom_interfaces__msg__AliveTurtleArray
{
  turtle_pursuit_custom_interfaces__msg__Turtle__Sequence turtles;
} turtle_pursuit_custom_interfaces__msg__AliveTurtleArray;

// Struct for a sequence of turtle_pursuit_custom_interfaces__msg__AliveTurtleArray.
typedef struct turtle_pursuit_custom_interfaces__msg__AliveTurtleArray__Sequence
{
  turtle_pursuit_custom_interfaces__msg__AliveTurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_pursuit_custom_interfaces__msg__AliveTurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__MSG__DETAIL__ALIVE_TURTLE_ARRAY__STRUCT_H_
