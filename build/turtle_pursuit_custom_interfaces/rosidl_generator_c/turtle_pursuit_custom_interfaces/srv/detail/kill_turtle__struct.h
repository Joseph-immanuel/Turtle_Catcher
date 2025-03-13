// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_pursuit_custom_interfaces:srv/KillTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_
#define TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KillTurtle in the package turtle_pursuit_custom_interfaces.
typedef struct turtle_pursuit_custom_interfaces__srv__KillTurtle_Request
{
  rosidl_runtime_c__String name;
} turtle_pursuit_custom_interfaces__srv__KillTurtle_Request;

// Struct for a sequence of turtle_pursuit_custom_interfaces__srv__KillTurtle_Request.
typedef struct turtle_pursuit_custom_interfaces__srv__KillTurtle_Request__Sequence
{
  turtle_pursuit_custom_interfaces__srv__KillTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_pursuit_custom_interfaces__srv__KillTurtle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/KillTurtle in the package turtle_pursuit_custom_interfaces.
typedef struct turtle_pursuit_custom_interfaces__srv__KillTurtle_Response
{
  bool success;
} turtle_pursuit_custom_interfaces__srv__KillTurtle_Response;

// Struct for a sequence of turtle_pursuit_custom_interfaces__srv__KillTurtle_Response.
typedef struct turtle_pursuit_custom_interfaces__srv__KillTurtle_Response__Sequence
{
  turtle_pursuit_custom_interfaces__srv__KillTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_pursuit_custom_interfaces__srv__KillTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_PURSUIT_CUSTOM_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_
