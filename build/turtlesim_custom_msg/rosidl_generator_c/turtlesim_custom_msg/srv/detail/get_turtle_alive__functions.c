// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_custom_msg:srv/GetTurtleAlive.idl
// generated code does not contain a copyright notice
#include "turtlesim_custom_msg/srv/detail/get_turtle_alive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__init(turtlesim_custom_msg__srv__GetTurtleAlive_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  return true;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Request__fini(turtlesim_custom_msg__srv__GetTurtleAlive_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__are_equal(const turtlesim_custom_msg__srv__GetTurtleAlive_Request * lhs, const turtlesim_custom_msg__srv__GetTurtleAlive_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (lhs->request != rhs->request) {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__copy(
  const turtlesim_custom_msg__srv__GetTurtleAlive_Request * input,
  turtlesim_custom_msg__srv__GetTurtleAlive_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  output->request = input->request;
  return true;
}

turtlesim_custom_msg__srv__GetTurtleAlive_Request *
turtlesim_custom_msg__srv__GetTurtleAlive_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Request * msg = (turtlesim_custom_msg__srv__GetTurtleAlive_Request *)allocator.allocate(sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Request));
  bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Request__destroy(turtlesim_custom_msg__srv__GetTurtleAlive_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msg__srv__GetTurtleAlive_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__init(turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Request * data = NULL;

  if (size) {
    data = (turtlesim_custom_msg__srv__GetTurtleAlive_Request *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msg__srv__GetTurtleAlive_Request__fini(&data[i - 1]);
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
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__fini(turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * array)
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
      turtlesim_custom_msg__srv__GetTurtleAlive_Request__fini(&array->data[i]);
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

turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence *
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * array = (turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__destroy(turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__are_equal(const turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * lhs, const turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msg__srv__GetTurtleAlive_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence__copy(
  const turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * input,
  turtlesim_custom_msg__srv__GetTurtleAlive_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msg__srv__GetTurtleAlive_Request * data =
      (turtlesim_custom_msg__srv__GetTurtleAlive_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msg__srv__GetTurtleAlive_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msg__srv__GetTurtleAlive_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msg__srv__GetTurtleAlive_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__init(turtlesim_custom_msg__srv__GetTurtleAlive_Response * msg)
{
  if (!msg) {
    return false;
  }
  // alive_turtles
  return true;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Response__fini(turtlesim_custom_msg__srv__GetTurtleAlive_Response * msg)
{
  if (!msg) {
    return;
  }
  // alive_turtles
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__are_equal(const turtlesim_custom_msg__srv__GetTurtleAlive_Response * lhs, const turtlesim_custom_msg__srv__GetTurtleAlive_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // alive_turtles
  if (lhs->alive_turtles != rhs->alive_turtles) {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__copy(
  const turtlesim_custom_msg__srv__GetTurtleAlive_Response * input,
  turtlesim_custom_msg__srv__GetTurtleAlive_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // alive_turtles
  output->alive_turtles = input->alive_turtles;
  return true;
}

turtlesim_custom_msg__srv__GetTurtleAlive_Response *
turtlesim_custom_msg__srv__GetTurtleAlive_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Response * msg = (turtlesim_custom_msg__srv__GetTurtleAlive_Response *)allocator.allocate(sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Response));
  bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Response__destroy(turtlesim_custom_msg__srv__GetTurtleAlive_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msg__srv__GetTurtleAlive_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__init(turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Response * data = NULL;

  if (size) {
    data = (turtlesim_custom_msg__srv__GetTurtleAlive_Response *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msg__srv__GetTurtleAlive_Response__fini(&data[i - 1]);
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
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__fini(turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * array)
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
      turtlesim_custom_msg__srv__GetTurtleAlive_Response__fini(&array->data[i]);
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

turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence *
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * array = (turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__destroy(turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__are_equal(const turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * lhs, const turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msg__srv__GetTurtleAlive_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence__copy(
  const turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * input,
  turtlesim_custom_msg__srv__GetTurtleAlive_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msg__srv__GetTurtleAlive_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msg__srv__GetTurtleAlive_Response * data =
      (turtlesim_custom_msg__srv__GetTurtleAlive_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msg__srv__GetTurtleAlive_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msg__srv__GetTurtleAlive_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msg__srv__GetTurtleAlive_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
