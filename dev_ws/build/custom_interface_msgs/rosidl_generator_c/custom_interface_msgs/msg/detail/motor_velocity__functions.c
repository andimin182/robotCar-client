// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface_msgs:msg/MotorVelocity.idl
// generated code does not contain a copyright notice
#include "custom_interface_msgs/msg/detail/motor_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interface_msgs__msg__MotorVelocity__init(custom_interface_msgs__msg__MotorVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // left_upper_wheel_vel
  // left_lower_wheel_vel
  // right_upper_wheel_vel
  // right_lower_wheel_vel
  return true;
}

void
custom_interface_msgs__msg__MotorVelocity__fini(custom_interface_msgs__msg__MotorVelocity * msg)
{
  if (!msg) {
    return;
  }
  // left_upper_wheel_vel
  // left_lower_wheel_vel
  // right_upper_wheel_vel
  // right_lower_wheel_vel
}

bool
custom_interface_msgs__msg__MotorVelocity__are_equal(const custom_interface_msgs__msg__MotorVelocity * lhs, const custom_interface_msgs__msg__MotorVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_upper_wheel_vel
  if (lhs->left_upper_wheel_vel != rhs->left_upper_wheel_vel) {
    return false;
  }
  // left_lower_wheel_vel
  if (lhs->left_lower_wheel_vel != rhs->left_lower_wheel_vel) {
    return false;
  }
  // right_upper_wheel_vel
  if (lhs->right_upper_wheel_vel != rhs->right_upper_wheel_vel) {
    return false;
  }
  // right_lower_wheel_vel
  if (lhs->right_lower_wheel_vel != rhs->right_lower_wheel_vel) {
    return false;
  }
  return true;
}

bool
custom_interface_msgs__msg__MotorVelocity__copy(
  const custom_interface_msgs__msg__MotorVelocity * input,
  custom_interface_msgs__msg__MotorVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // left_upper_wheel_vel
  output->left_upper_wheel_vel = input->left_upper_wheel_vel;
  // left_lower_wheel_vel
  output->left_lower_wheel_vel = input->left_lower_wheel_vel;
  // right_upper_wheel_vel
  output->right_upper_wheel_vel = input->right_upper_wheel_vel;
  // right_lower_wheel_vel
  output->right_lower_wheel_vel = input->right_lower_wheel_vel;
  return true;
}

custom_interface_msgs__msg__MotorVelocity *
custom_interface_msgs__msg__MotorVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__MotorVelocity * msg = (custom_interface_msgs__msg__MotorVelocity *)allocator.allocate(sizeof(custom_interface_msgs__msg__MotorVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface_msgs__msg__MotorVelocity));
  bool success = custom_interface_msgs__msg__MotorVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interface_msgs__msg__MotorVelocity__destroy(custom_interface_msgs__msg__MotorVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interface_msgs__msg__MotorVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interface_msgs__msg__MotorVelocity__Sequence__init(custom_interface_msgs__msg__MotorVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__MotorVelocity * data = NULL;

  if (size) {
    data = (custom_interface_msgs__msg__MotorVelocity *)allocator.zero_allocate(size, sizeof(custom_interface_msgs__msg__MotorVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface_msgs__msg__MotorVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface_msgs__msg__MotorVelocity__fini(&data[i - 1]);
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
custom_interface_msgs__msg__MotorVelocity__Sequence__fini(custom_interface_msgs__msg__MotorVelocity__Sequence * array)
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
      custom_interface_msgs__msg__MotorVelocity__fini(&array->data[i]);
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

custom_interface_msgs__msg__MotorVelocity__Sequence *
custom_interface_msgs__msg__MotorVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interface_msgs__msg__MotorVelocity__Sequence * array = (custom_interface_msgs__msg__MotorVelocity__Sequence *)allocator.allocate(sizeof(custom_interface_msgs__msg__MotorVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interface_msgs__msg__MotorVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interface_msgs__msg__MotorVelocity__Sequence__destroy(custom_interface_msgs__msg__MotorVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interface_msgs__msg__MotorVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interface_msgs__msg__MotorVelocity__Sequence__are_equal(const custom_interface_msgs__msg__MotorVelocity__Sequence * lhs, const custom_interface_msgs__msg__MotorVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interface_msgs__msg__MotorVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interface_msgs__msg__MotorVelocity__Sequence__copy(
  const custom_interface_msgs__msg__MotorVelocity__Sequence * input,
  custom_interface_msgs__msg__MotorVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interface_msgs__msg__MotorVelocity);
    custom_interface_msgs__msg__MotorVelocity * data =
      (custom_interface_msgs__msg__MotorVelocity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interface_msgs__msg__MotorVelocity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interface_msgs__msg__MotorVelocity__fini(&data[i]);
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
    if (!custom_interface_msgs__msg__MotorVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
