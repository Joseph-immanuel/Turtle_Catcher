// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_pursuit_custom_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice
#include "turtle_pursuit_custom_interfaces/msg/detail/turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_pursuit_custom_interfaces__msg__Turtle__init(turtle_pursuit_custom_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtle_pursuit_custom_interfaces__msg__Turtle__fini(msg);
    return false;
  }
  // x_pose
  // y_pose
  // theta
  return true;
}

void
turtle_pursuit_custom_interfaces__msg__Turtle__fini(turtle_pursuit_custom_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x_pose
  // y_pose
  // theta
}

bool
turtle_pursuit_custom_interfaces__msg__Turtle__are_equal(const turtle_pursuit_custom_interfaces__msg__Turtle * lhs, const turtle_pursuit_custom_interfaces__msg__Turtle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x_pose
  if (lhs->x_pose != rhs->x_pose) {
    return false;
  }
  // y_pose
  if (lhs->y_pose != rhs->y_pose) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtle_pursuit_custom_interfaces__msg__Turtle__copy(
  const turtle_pursuit_custom_interfaces__msg__Turtle * input,
  turtle_pursuit_custom_interfaces__msg__Turtle * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x_pose
  output->x_pose = input->x_pose;
  // y_pose
  output->y_pose = input->y_pose;
  // theta
  output->theta = input->theta;
  return true;
}

turtle_pursuit_custom_interfaces__msg__Turtle *
turtle_pursuit_custom_interfaces__msg__Turtle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_pursuit_custom_interfaces__msg__Turtle * msg = (turtle_pursuit_custom_interfaces__msg__Turtle *)allocator.allocate(sizeof(turtle_pursuit_custom_interfaces__msg__Turtle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_pursuit_custom_interfaces__msg__Turtle));
  bool success = turtle_pursuit_custom_interfaces__msg__Turtle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_pursuit_custom_interfaces__msg__Turtle__destroy(turtle_pursuit_custom_interfaces__msg__Turtle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_pursuit_custom_interfaces__msg__Turtle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__init(turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_pursuit_custom_interfaces__msg__Turtle * data = NULL;

  if (size) {
    data = (turtle_pursuit_custom_interfaces__msg__Turtle *)allocator.zero_allocate(size, sizeof(turtle_pursuit_custom_interfaces__msg__Turtle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_pursuit_custom_interfaces__msg__Turtle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_pursuit_custom_interfaces__msg__Turtle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__fini(turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_pursuit_custom_interfaces__msg__Turtle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_pursuit_custom_interfaces__msg__Turtle__Sequence *
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * array = (turtle_pursuit_custom_interfaces__msg__Turtle__Sequence *)allocator.allocate(sizeof(turtle_pursuit_custom_interfaces__msg__Turtle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__destroy(turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__are_equal(const turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * lhs, const turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_pursuit_custom_interfaces__msg__Turtle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_pursuit_custom_interfaces__msg__Turtle__Sequence__copy(
  const turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * input,
  turtle_pursuit_custom_interfaces__msg__Turtle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_pursuit_custom_interfaces__msg__Turtle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_pursuit_custom_interfaces__msg__Turtle * data =
      (turtle_pursuit_custom_interfaces__msg__Turtle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_pursuit_custom_interfaces__msg__Turtle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_pursuit_custom_interfaces__msg__Turtle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_pursuit_custom_interfaces__msg__Turtle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
