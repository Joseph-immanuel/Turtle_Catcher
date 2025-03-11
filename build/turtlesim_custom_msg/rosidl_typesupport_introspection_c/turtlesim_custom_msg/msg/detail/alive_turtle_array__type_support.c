// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim_custom_msg:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim_custom_msg/msg/detail/alive_turtle_array__rosidl_typesupport_introspection_c.h"
#include "turtlesim_custom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim_custom_msg/msg/detail/alive_turtle_array__functions.h"
#include "turtlesim_custom_msg/msg/detail/alive_turtle_array__struct.h"


// Include directives for member types
// Member `turtles`
#include "turtlesim_custom_msg/msg/turtle.h"
// Member `turtles`
#include "turtlesim_custom_msg/msg/detail/turtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_custom_msg__msg__AliveTurtleArray__init(message_memory);
}

void turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_fini_function(void * message_memory)
{
  turtlesim_custom_msg__msg__AliveTurtleArray__fini(message_memory);
}

size_t turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__size_function__AliveTurtleArray__turtles(
  const void * untyped_member)
{
  const turtlesim_custom_msg__msg__Turtle__Sequence * member =
    (const turtlesim_custom_msg__msg__Turtle__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_const_function__AliveTurtleArray__turtles(
  const void * untyped_member, size_t index)
{
  const turtlesim_custom_msg__msg__Turtle__Sequence * member =
    (const turtlesim_custom_msg__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_function__AliveTurtleArray__turtles(
  void * untyped_member, size_t index)
{
  turtlesim_custom_msg__msg__Turtle__Sequence * member =
    (turtlesim_custom_msg__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__fetch_function__AliveTurtleArray__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const turtlesim_custom_msg__msg__Turtle * item =
    ((const turtlesim_custom_msg__msg__Turtle *)
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_const_function__AliveTurtleArray__turtles(untyped_member, index));
  turtlesim_custom_msg__msg__Turtle * value =
    (turtlesim_custom_msg__msg__Turtle *)(untyped_value);
  *value = *item;
}

void turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__assign_function__AliveTurtleArray__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  turtlesim_custom_msg__msg__Turtle * item =
    ((turtlesim_custom_msg__msg__Turtle *)
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_function__AliveTurtleArray__turtles(untyped_member, index));
  const turtlesim_custom_msg__msg__Turtle * value =
    (const turtlesim_custom_msg__msg__Turtle *)(untyped_value);
  *item = *value;
}

bool turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__resize_function__AliveTurtleArray__turtles(
  void * untyped_member, size_t size)
{
  turtlesim_custom_msg__msg__Turtle__Sequence * member =
    (turtlesim_custom_msg__msg__Turtle__Sequence *)(untyped_member);
  turtlesim_custom_msg__msg__Turtle__Sequence__fini(member);
  return turtlesim_custom_msg__msg__Turtle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_member_array[1] = {
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_custom_msg__msg__AliveTurtleArray, turtles),  // bytes offset in struct
    NULL,  // default value
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__size_function__AliveTurtleArray__turtles,  // size() function pointer
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_const_function__AliveTurtleArray__turtles,  // get_const(index) function pointer
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__get_function__AliveTurtleArray__turtles,  // get(index) function pointer
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__fetch_function__AliveTurtleArray__turtles,  // fetch(index, &value) function pointer
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__assign_function__AliveTurtleArray__turtles,  // assign(index, value) function pointer
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__resize_function__AliveTurtleArray__turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_members = {
  "turtlesim_custom_msg__msg",  // message namespace
  "AliveTurtleArray",  // message name
  1,  // number of fields
  sizeof(turtlesim_custom_msg__msg__AliveTurtleArray),
  turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_member_array,  // message members
  turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_type_support_handle = {
  0,
  &turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_custom_msg, msg, AliveTurtleArray)() {
  turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_custom_msg, msg, Turtle)();
  if (!turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_type_support_handle.typesupport_identifier) {
    turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim_custom_msg__msg__AliveTurtleArray__rosidl_typesupport_introspection_c__AliveTurtleArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
