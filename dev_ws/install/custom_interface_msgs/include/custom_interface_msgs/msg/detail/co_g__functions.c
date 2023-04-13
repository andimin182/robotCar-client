// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface_msgs:msg/CoG.idl
// generated code does not contain a copyright notice
#include "custom_interface_msgs/msg/detail/co_g__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interface_msgs__msg__CoG__init(custom_interface_msgs__msg__CoG * msg)
{
  if (!msg) {
    return false;
  }
  // position_x
  // position_y
  return true;
}

void
custom_interface_msgs__msg__CoG__fini(custom_interface_msgs__msg__CoG * msg)
{
  if (!msg) {
    return;
  }
  // position_x
  // position_y
}

bool
custom_interface_msgs__msg__CoG__are_equal(const custom_interface_msgs__msg__CoG * lhs, const custom_interface_msgs__msg__CoG * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  return true;
}

bool
custom_interface_msgs__msg__CoG__copy(
  const custom_interface_msgs__msg__CoG * input,
  custom_interface_msgs__msg__CoG * output)
{
  if (!input || !output) {
    return false;
  }
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  return true;
}

custom_interface_msgs__msg__CoG *
custom_interface_msgs__msg__CoG__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__CoG * msg = (custom_interface_msgs__msg__CoG *)allocator.allocate(sizeof(custom_interface_msgs__msg__CoG), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface_msgs__msg__CoG));
  bool success = custom_interface_msgs__msg__CoG__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface_msgs__msg__CoG__destroy(custom_interface_msgs__msg__CoG * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface_msgs__msg__CoG__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface_msgs__msg__CoG__Sequence__init(custom_interface_msgs__msg__CoG__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__CoG * data = NULL;

  if (size) {
    data = (custom_interface_msgs__msg__CoG *)allocator.zero_allocate(size, sizeof(custom_interface_msgs__msg__CoG), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface_msgs__msg__CoG__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface_msgs__msg__CoG__fini(&data[i - 1]);
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
custom_interface_msgs__msg__CoG__Sequence__fini(custom_interface_msgs__msg__CoG__Sequence * array)
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
      custom_interface_msgs__msg__CoG__fini(&array->data[i]);
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

custom_interface_msgs__msg__CoG__Sequence *
custom_interface_msgs__msg__CoG__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__CoG__Sequence * array = (custom_interface_msgs__msg__CoG__Sequence *)allocator.allocate(sizeof(custom_interface_msgs__msg__CoG__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface_msgs__msg__CoG__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface_msgs__msg__CoG__Sequence__destroy(custom_interface_msgs__msg__CoG__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface_msgs__msg__CoG__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface_msgs__msg__CoG__Sequence__are_equal(const custom_interface_msgs__msg__CoG__Sequence * lhs, const custom_interface_msgs__msg__CoG__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface_msgs__msg__CoG__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface_msgs__msg__CoG__Sequence__copy(
  const custom_interface_msgs__msg__CoG__Sequence * input,
  custom_interface_msgs__msg__CoG__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface_msgs__msg__CoG);
    custom_interface_msgs__msg__CoG * data =
      (custom_interface_msgs__msg__CoG *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface_msgs__msg__CoG__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface_msgs__msg__CoG__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interface_msgs__msg__CoG__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
