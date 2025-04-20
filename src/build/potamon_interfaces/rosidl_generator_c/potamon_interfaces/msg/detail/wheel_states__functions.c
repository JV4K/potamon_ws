// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice
#include "potamon_interfaces/msg/detail/wheel_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
potamon_interfaces__msg__WheelStates__init(potamon_interfaces__msg__WheelStates * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // angular_velocity
  // current
  return true;
}

void
potamon_interfaces__msg__WheelStates__fini(potamon_interfaces__msg__WheelStates * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // angular_velocity
  // current
}

bool
potamon_interfaces__msg__WheelStates__are_equal(const potamon_interfaces__msg__WheelStates * lhs, const potamon_interfaces__msg__WheelStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->angle[i] != rhs->angle[i]) {
      return false;
    }
  }
  // angular_velocity
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->angular_velocity[i] != rhs->angular_velocity[i]) {
      return false;
    }
  }
  // current
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->current[i] != rhs->current[i]) {
      return false;
    }
  }
  return true;
}

bool
potamon_interfaces__msg__WheelStates__copy(
  const potamon_interfaces__msg__WheelStates * input,
  potamon_interfaces__msg__WheelStates * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  for (size_t i = 0; i < 4; ++i) {
    output->angle[i] = input->angle[i];
  }
  // angular_velocity
  for (size_t i = 0; i < 4; ++i) {
    output->angular_velocity[i] = input->angular_velocity[i];
  }
  // current
  for (size_t i = 0; i < 4; ++i) {
    output->current[i] = input->current[i];
  }
  return true;
}

potamon_interfaces__msg__WheelStates *
potamon_interfaces__msg__WheelStates__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__msg__WheelStates * msg = (potamon_interfaces__msg__WheelStates *)allocator.allocate(sizeof(potamon_interfaces__msg__WheelStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(potamon_interfaces__msg__WheelStates));
  bool success = potamon_interfaces__msg__WheelStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
potamon_interfaces__msg__WheelStates__destroy(potamon_interfaces__msg__WheelStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    potamon_interfaces__msg__WheelStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
potamon_interfaces__msg__WheelStates__Sequence__init(potamon_interfaces__msg__WheelStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__msg__WheelStates * data = NULL;

  if (size) {
    data = (potamon_interfaces__msg__WheelStates *)allocator.zero_allocate(size, sizeof(potamon_interfaces__msg__WheelStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = potamon_interfaces__msg__WheelStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        potamon_interfaces__msg__WheelStates__fini(&data[i - 1]);
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
potamon_interfaces__msg__WheelStates__Sequence__fini(potamon_interfaces__msg__WheelStates__Sequence * array)
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
      potamon_interfaces__msg__WheelStates__fini(&array->data[i]);
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

potamon_interfaces__msg__WheelStates__Sequence *
potamon_interfaces__msg__WheelStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__msg__WheelStates__Sequence * array = (potamon_interfaces__msg__WheelStates__Sequence *)allocator.allocate(sizeof(potamon_interfaces__msg__WheelStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = potamon_interfaces__msg__WheelStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
potamon_interfaces__msg__WheelStates__Sequence__destroy(potamon_interfaces__msg__WheelStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    potamon_interfaces__msg__WheelStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
potamon_interfaces__msg__WheelStates__Sequence__are_equal(const potamon_interfaces__msg__WheelStates__Sequence * lhs, const potamon_interfaces__msg__WheelStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!potamon_interfaces__msg__WheelStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
potamon_interfaces__msg__WheelStates__Sequence__copy(
  const potamon_interfaces__msg__WheelStates__Sequence * input,
  potamon_interfaces__msg__WheelStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(potamon_interfaces__msg__WheelStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    potamon_interfaces__msg__WheelStates * data =
      (potamon_interfaces__msg__WheelStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!potamon_interfaces__msg__WheelStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          potamon_interfaces__msg__WheelStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!potamon_interfaces__msg__WheelStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
