// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_custom_msg:msg/AliveTurtleArray.idl
// generated code does not contain a copyright notice
#include "turtlesim_custom_msg/msg/detail/alive_turtle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "turtlesim_custom_msg/msg/detail/turtle__functions.h"

bool
turtlesim_custom_msg__msg__AliveTurtleArray__init(turtlesim_custom_msg__msg__AliveTurtleArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!turtlesim_custom_msg__msg__Turtle__Sequence__init(&msg->turtles, 0)) {
    turtlesim_custom_msg__msg__AliveTurtleArray__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_custom_msg__msg__AliveTurtleArray__fini(turtlesim_custom_msg__msg__AliveTurtleArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  turtlesim_custom_msg__msg__Turtle__Sequence__fini(&msg->turtles);
}

bool
turtlesim_custom_msg__msg__AliveTurtleArray__are_equal(const turtlesim_custom_msg__msg__AliveTurtleArray * lhs, const turtlesim_custom_msg__msg__AliveTurtleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!turtlesim_custom_msg__msg__Turtle__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msg__msg__AliveTurtleArray__copy(
  const turtlesim_custom_msg__msg__AliveTurtleArray * input,
  turtlesim_custom_msg__msg__AliveTurtleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!turtlesim_custom_msg__msg__Turtle__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

turtlesim_custom_msg__msg__AliveTurtleArray *
turtlesim_custom_msg__msg__AliveTurtleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__msg__AliveTurtleArray * msg = (turtlesim_custom_msg__msg__AliveTurtleArray *)allocator.allocate(sizeof(turtlesim_custom_msg__msg__AliveTurtleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msg__msg__AliveTurtleArray));
  bool success = turtlesim_custom_msg__msg__AliveTurtleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msg__msg__AliveTurtleArray__destroy(turtlesim_custom_msg__msg__AliveTurtleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msg__msg__AliveTurtleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__init(turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__msg__AliveTurtleArray * data = NULL;

  if (size) {
    data = (turtlesim_custom_msg__msg__AliveTurtleArray *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msg__msg__AliveTurtleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msg__msg__AliveTurtleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msg__msg__AliveTurtleArray__fini(&data[i - 1]);
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
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__fini(turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * array)
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
      turtlesim_custom_msg__msg__AliveTurtleArray__fini(&array->data[i]);
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

turtlesim_custom_msg__msg__AliveTurtleArray__Sequence *
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * array = (turtlesim_custom_msg__msg__AliveTurtleArray__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msg__msg__AliveTurtleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__destroy(turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__are_equal(const turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * lhs, const turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msg__msg__AliveTurtleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msg__msg__AliveTurtleArray__Sequence__copy(
  const turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * input,
  turtlesim_custom_msg__msg__AliveTurtleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msg__msg__AliveTurtleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msg__msg__AliveTurtleArray * data =
      (turtlesim_custom_msg__msg__AliveTurtleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msg__msg__AliveTurtleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msg__msg__AliveTurtleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msg__msg__AliveTurtleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
