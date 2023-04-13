// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface_msgs:msg/ServoCameraCommand.idl
// generated code does not contain a copyright notice
#include "custom_interface_msgs/msg/detail/servo_camera_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interface_msgs__msg__ServoCameraCommand__init(custom_interface_msgs__msg__ServoCameraCommand * msg)
{
  if (!msg) {
    return false;
  }
  // servo_camera_angle_1
  // servo_camera_angle_2
  return true;
}

void
custom_interface_msgs__msg__ServoCameraCommand__fini(custom_interface_msgs__msg__ServoCameraCommand * msg)
{
  if (!msg) {
    return;
  }
  // servo_camera_angle_1
  // servo_camera_angle_2
}

bool
custom_interface_msgs__msg__ServoCameraCommand__are_equal(const custom_interface_msgs__msg__ServoCameraCommand * lhs, const custom_interface_msgs__msg__ServoCameraCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_camera_angle_1
  if (lhs->servo_camera_angle_1 != rhs->servo_camera_angle_1) {
    return false;
  }
  // servo_camera_angle_2
  if (lhs->servo_camera_angle_2 != rhs->servo_camera_angle_2) {
    return false;
  }
  return true;
}

bool
custom_interface_msgs__msg__ServoCameraCommand__copy(
  const custom_interface_msgs__msg__ServoCameraCommand * input,
  custom_interface_msgs__msg__ServoCameraCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_camera_angle_1
  output->servo_camera_angle_1 = input->servo_camera_angle_1;
  // servo_camera_angle_2
  output->servo_camera_angle_2 = input->servo_camera_angle_2;
  return true;
}

custom_interface_msgs__msg__ServoCameraCommand *
custom_interface_msgs__msg__ServoCameraCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__ServoCameraCommand * msg = (custom_interface_msgs__msg__ServoCameraCommand *)allocator.allocate(sizeof(custom_interface_msgs__msg__ServoCameraCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface_msgs__msg__ServoCameraCommand));
  bool success = custom_interface_msgs__msg__ServoCameraCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface_msgs__msg__ServoCameraCommand__destroy(custom_interface_msgs__msg__ServoCameraCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface_msgs__msg__ServoCameraCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface_msgs__msg__ServoCameraCommand__Sequence__init(custom_interface_msgs__msg__ServoCameraCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__ServoCameraCommand * data = NULL;

  if (size) {
    data = (custom_interface_msgs__msg__ServoCameraCommand *)allocator.zero_allocate(size, sizeof(custom_interface_msgs__msg__ServoCameraCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface_msgs__msg__ServoCameraCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface_msgs__msg__ServoCameraCommand__fini(&data[i - 1]);
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
custom_interface_msgs__msg__ServoCameraCommand__Sequence__fini(custom_interface_msgs__msg__ServoCameraCommand__Sequence * array)
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
      custom_interface_msgs__msg__ServoCameraCommand__fini(&array->data[i]);
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

custom_interface_msgs__msg__ServoCameraCommand__Sequence *
custom_interface_msgs__msg__ServoCameraCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__ServoCameraCommand__Sequence * array = (custom_interface_msgs__msg__ServoCameraCommand__Sequence *)allocator.allocate(sizeof(custom_interface_msgs__msg__ServoCameraCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface_msgs__msg__ServoCameraCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface_msgs__msg__ServoCameraCommand__Sequence__destroy(custom_interface_msgs__msg__ServoCameraCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface_msgs__msg__ServoCameraCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface_msgs__msg__ServoCameraCommand__Sequence__are_equal(const custom_interface_msgs__msg__ServoCameraCommand__Sequence * lhs, const custom_interface_msgs__msg__ServoCameraCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface_msgs__msg__ServoCameraCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface_msgs__msg__ServoCameraCommand__Sequence__copy(
  const custom_interface_msgs__msg__ServoCameraCommand__Sequence * input,
  custom_interface_msgs__msg__ServoCameraCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface_msgs__msg__ServoCameraCommand);
    custom_interface_msgs__msg__ServoCameraCommand * data =
      (custom_interface_msgs__msg__ServoCameraCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface_msgs__msg__ServoCameraCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface_msgs__msg__ServoCameraCommand__fini(&data[i]);
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
    if (!custom_interface_msgs__msg__ServoCameraCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
