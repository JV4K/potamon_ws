// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "potamon_interfaces/msg/detail/system_status__struct.h"
#include "potamon_interfaces/msg/detail/system_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool potamon_interfaces__msg__system_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("potamon_interfaces.msg._system_status.SystemStatus", full_classname_dest, 50) == 0);
  }
  potamon_interfaces__msg__SystemStatus * ros_message = _ros_message;
  {  // bus_comms_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_comms_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bus_comms_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // usb_comms_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_comms_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usb_comms_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bridge_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "bridge_faults");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bridge_faults'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->bridge_faults;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // overcurrent_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "overcurrent_faults");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'overcurrent_faults'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->overcurrent_faults;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * potamon_interfaces__msg__system_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("potamon_interfaces.msg._system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  potamon_interfaces__msg__SystemStatus * ros_message = (potamon_interfaces__msg__SystemStatus *)raw_ros_message;
  {  // bus_comms_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bus_comms_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_comms_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_comms_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usb_comms_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_comms_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bridge_faults
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->bridge_faults;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bridge_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overcurrent_faults
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->overcurrent_faults;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "overcurrent_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
