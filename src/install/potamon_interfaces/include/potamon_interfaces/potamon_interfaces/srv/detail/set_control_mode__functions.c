// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from potamon_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice
#include "potamon_interfaces/srv/detail/set_control_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
potamon_interfaces__srv__SetControlMode_Request__init(potamon_interfaces__srv__SetControlMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
potamon_interfaces__srv__SetControlMode_Request__fini(potamon_interfaces__srv__SetControlMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
potamon_interfaces__srv__SetControlMode_Request__are_equal(const potamon_interfaces__srv__SetControlMode_Request * lhs, const potamon_interfaces__srv__SetControlMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Request__copy(
  const potamon_interfaces__srv__SetControlMode_Request * input,
  potamon_interfaces__srv__SetControlMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

potamon_interfaces__srv__SetControlMode_Request *
potamon_interfaces__srv__SetControlMode_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Request * msg = (potamon_interfaces__srv__SetControlMode_Request *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(potamon_interfaces__srv__SetControlMode_Request));
  bool success = potamon_interfaces__srv__SetControlMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
potamon_interfaces__srv__SetControlMode_Request__destroy(potamon_interfaces__srv__SetControlMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    potamon_interfaces__srv__SetControlMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
potamon_interfaces__srv__SetControlMode_Request__Sequence__init(potamon_interfaces__srv__SetControlMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Request * data = NULL;

  if (size) {
    data = (potamon_interfaces__srv__SetControlMode_Request *)allocator.zero_allocate(size, sizeof(potamon_interfaces__srv__SetControlMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = potamon_interfaces__srv__SetControlMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        potamon_interfaces__srv__SetControlMode_Request__fini(&data[i - 1]);
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
potamon_interfaces__srv__SetControlMode_Request__Sequence__fini(potamon_interfaces__srv__SetControlMode_Request__Sequence * array)
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
      potamon_interfaces__srv__SetControlMode_Request__fini(&array->data[i]);
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

potamon_interfaces__srv__SetControlMode_Request__Sequence *
potamon_interfaces__srv__SetControlMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Request__Sequence * array = (potamon_interfaces__srv__SetControlMode_Request__Sequence *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = potamon_interfaces__srv__SetControlMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
potamon_interfaces__srv__SetControlMode_Request__Sequence__destroy(potamon_interfaces__srv__SetControlMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    potamon_interfaces__srv__SetControlMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
potamon_interfaces__srv__SetControlMode_Request__Sequence__are_equal(const potamon_interfaces__srv__SetControlMode_Request__Sequence * lhs, const potamon_interfaces__srv__SetControlMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Request__Sequence__copy(
  const potamon_interfaces__srv__SetControlMode_Request__Sequence * input,
  potamon_interfaces__srv__SetControlMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(potamon_interfaces__srv__SetControlMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    potamon_interfaces__srv__SetControlMode_Request * data =
      (potamon_interfaces__srv__SetControlMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!potamon_interfaces__srv__SetControlMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          potamon_interfaces__srv__SetControlMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
potamon_interfaces__srv__SetControlMode_Response__init(potamon_interfaces__srv__SetControlMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    potamon_interfaces__srv__SetControlMode_Response__fini(msg);
    return false;
  }
  return true;
}

void
potamon_interfaces__srv__SetControlMode_Response__fini(potamon_interfaces__srv__SetControlMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
potamon_interfaces__srv__SetControlMode_Response__are_equal(const potamon_interfaces__srv__SetControlMode_Response * lhs, const potamon_interfaces__srv__SetControlMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Response__copy(
  const potamon_interfaces__srv__SetControlMode_Response * input,
  potamon_interfaces__srv__SetControlMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

potamon_interfaces__srv__SetControlMode_Response *
potamon_interfaces__srv__SetControlMode_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Response * msg = (potamon_interfaces__srv__SetControlMode_Response *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(potamon_interfaces__srv__SetControlMode_Response));
  bool success = potamon_interfaces__srv__SetControlMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
potamon_interfaces__srv__SetControlMode_Response__destroy(potamon_interfaces__srv__SetControlMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    potamon_interfaces__srv__SetControlMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
potamon_interfaces__srv__SetControlMode_Response__Sequence__init(potamon_interfaces__srv__SetControlMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Response * data = NULL;

  if (size) {
    data = (potamon_interfaces__srv__SetControlMode_Response *)allocator.zero_allocate(size, sizeof(potamon_interfaces__srv__SetControlMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = potamon_interfaces__srv__SetControlMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        potamon_interfaces__srv__SetControlMode_Response__fini(&data[i - 1]);
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
potamon_interfaces__srv__SetControlMode_Response__Sequence__fini(potamon_interfaces__srv__SetControlMode_Response__Sequence * array)
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
      potamon_interfaces__srv__SetControlMode_Response__fini(&array->data[i]);
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

potamon_interfaces__srv__SetControlMode_Response__Sequence *
potamon_interfaces__srv__SetControlMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Response__Sequence * array = (potamon_interfaces__srv__SetControlMode_Response__Sequence *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = potamon_interfaces__srv__SetControlMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
potamon_interfaces__srv__SetControlMode_Response__Sequence__destroy(potamon_interfaces__srv__SetControlMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    potamon_interfaces__srv__SetControlMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
potamon_interfaces__srv__SetControlMode_Response__Sequence__are_equal(const potamon_interfaces__srv__SetControlMode_Response__Sequence * lhs, const potamon_interfaces__srv__SetControlMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Response__Sequence__copy(
  const potamon_interfaces__srv__SetControlMode_Response__Sequence * input,
  potamon_interfaces__srv__SetControlMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(potamon_interfaces__srv__SetControlMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    potamon_interfaces__srv__SetControlMode_Response * data =
      (potamon_interfaces__srv__SetControlMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!potamon_interfaces__srv__SetControlMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          potamon_interfaces__srv__SetControlMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__functions.h"

bool
potamon_interfaces__srv__SetControlMode_Event__init(potamon_interfaces__srv__SetControlMode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    potamon_interfaces__srv__SetControlMode_Event__fini(msg);
    return false;
  }
  // request
  if (!potamon_interfaces__srv__SetControlMode_Request__Sequence__init(&msg->request, 0)) {
    potamon_interfaces__srv__SetControlMode_Event__fini(msg);
    return false;
  }
  // response
  if (!potamon_interfaces__srv__SetControlMode_Response__Sequence__init(&msg->response, 0)) {
    potamon_interfaces__srv__SetControlMode_Event__fini(msg);
    return false;
  }
  return true;
}

void
potamon_interfaces__srv__SetControlMode_Event__fini(potamon_interfaces__srv__SetControlMode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  potamon_interfaces__srv__SetControlMode_Request__Sequence__fini(&msg->request);
  // response
  potamon_interfaces__srv__SetControlMode_Response__Sequence__fini(&msg->response);
}

bool
potamon_interfaces__srv__SetControlMode_Event__are_equal(const potamon_interfaces__srv__SetControlMode_Event * lhs, const potamon_interfaces__srv__SetControlMode_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!potamon_interfaces__srv__SetControlMode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!potamon_interfaces__srv__SetControlMode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Event__copy(
  const potamon_interfaces__srv__SetControlMode_Event * input,
  potamon_interfaces__srv__SetControlMode_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!potamon_interfaces__srv__SetControlMode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!potamon_interfaces__srv__SetControlMode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

potamon_interfaces__srv__SetControlMode_Event *
potamon_interfaces__srv__SetControlMode_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Event * msg = (potamon_interfaces__srv__SetControlMode_Event *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(potamon_interfaces__srv__SetControlMode_Event));
  bool success = potamon_interfaces__srv__SetControlMode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
potamon_interfaces__srv__SetControlMode_Event__destroy(potamon_interfaces__srv__SetControlMode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    potamon_interfaces__srv__SetControlMode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
potamon_interfaces__srv__SetControlMode_Event__Sequence__init(potamon_interfaces__srv__SetControlMode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Event * data = NULL;

  if (size) {
    data = (potamon_interfaces__srv__SetControlMode_Event *)allocator.zero_allocate(size, sizeof(potamon_interfaces__srv__SetControlMode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = potamon_interfaces__srv__SetControlMode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        potamon_interfaces__srv__SetControlMode_Event__fini(&data[i - 1]);
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
potamon_interfaces__srv__SetControlMode_Event__Sequence__fini(potamon_interfaces__srv__SetControlMode_Event__Sequence * array)
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
      potamon_interfaces__srv__SetControlMode_Event__fini(&array->data[i]);
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

potamon_interfaces__srv__SetControlMode_Event__Sequence *
potamon_interfaces__srv__SetControlMode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  potamon_interfaces__srv__SetControlMode_Event__Sequence * array = (potamon_interfaces__srv__SetControlMode_Event__Sequence *)allocator.allocate(sizeof(potamon_interfaces__srv__SetControlMode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = potamon_interfaces__srv__SetControlMode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
potamon_interfaces__srv__SetControlMode_Event__Sequence__destroy(potamon_interfaces__srv__SetControlMode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    potamon_interfaces__srv__SetControlMode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
potamon_interfaces__srv__SetControlMode_Event__Sequence__are_equal(const potamon_interfaces__srv__SetControlMode_Event__Sequence * lhs, const potamon_interfaces__srv__SetControlMode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
potamon_interfaces__srv__SetControlMode_Event__Sequence__copy(
  const potamon_interfaces__srv__SetControlMode_Event__Sequence * input,
  potamon_interfaces__srv__SetControlMode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(potamon_interfaces__srv__SetControlMode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    potamon_interfaces__srv__SetControlMode_Event * data =
      (potamon_interfaces__srv__SetControlMode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!potamon_interfaces__srv__SetControlMode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          potamon_interfaces__srv__SetControlMode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!potamon_interfaces__srv__SetControlMode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
