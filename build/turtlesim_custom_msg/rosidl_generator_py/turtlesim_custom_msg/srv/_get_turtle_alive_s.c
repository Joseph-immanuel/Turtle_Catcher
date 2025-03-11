// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtlesim_custom_msg:srv/GetTurtleAlive.idl
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
#include "turtlesim_custom_msg/srv/detail/get_turtle_alive__struct.h"
#include "turtlesim_custom_msg/srv/detail/get_turtle_alive__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtlesim_custom_msg__srv__get_turtle_alive__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("turtlesim_custom_msg.srv._get_turtle_alive.GetTurtleAlive_Request", full_classname_dest, 65) == 0);
  }
  turtlesim_custom_msg__srv__GetTurtleAlive_Request * ros_message = _ros_message;
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->request = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtlesim_custom_msg__srv__get_turtle_alive__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetTurtleAlive_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtlesim_custom_msg.srv._get_turtle_alive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetTurtleAlive_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtlesim_custom_msg__srv__GetTurtleAlive_Request * ros_message = (turtlesim_custom_msg__srv__GetTurtleAlive_Request *)raw_ros_message;
  {  // request
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->request ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "turtlesim_custom_msg/srv/detail/get_turtle_alive__struct.h"
// already included above
// #include "turtlesim_custom_msg/srv/detail/get_turtle_alive__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtlesim_custom_msg__srv__get_turtle_alive__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("turtlesim_custom_msg.srv._get_turtle_alive.GetTurtleAlive_Response", full_classname_dest, 66) == 0);
  }
  turtlesim_custom_msg__srv__GetTurtleAlive_Response * ros_message = _ros_message;
  {  // alive_turtles
    PyObject * field = PyObject_GetAttrString(_pymsg, "alive_turtles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alive_turtles = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtlesim_custom_msg__srv__get_turtle_alive__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetTurtleAlive_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtlesim_custom_msg.srv._get_turtle_alive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetTurtleAlive_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtlesim_custom_msg__srv__GetTurtleAlive_Response * ros_message = (turtlesim_custom_msg__srv__GetTurtleAlive_Response *)raw_ros_message;
  {  // alive_turtles
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->alive_turtles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alive_turtles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
