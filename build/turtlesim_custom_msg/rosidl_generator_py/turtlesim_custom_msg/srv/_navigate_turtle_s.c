// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtlesim_custom_msg:srv/NavigateTurtle.idl
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
#include "turtlesim_custom_msg/srv/detail/navigate_turtle__struct.h"
#include "turtlesim_custom_msg/srv/detail/navigate_turtle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtlesim_custom_msg__srv__navigate_turtle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("turtlesim_custom_msg.srv._navigate_turtle.NavigateTurtle_Request", full_classname_dest, 64) == 0);
  }
  turtlesim_custom_msg__srv__NavigateTurtle_Request * ros_message = _ros_message;
  {  // x_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_pose");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_pose = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_pose");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_pose = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtlesim_custom_msg__srv__navigate_turtle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavigateTurtle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtlesim_custom_msg.srv._navigate_turtle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavigateTurtle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtlesim_custom_msg__srv__NavigateTurtle_Request * ros_message = (turtlesim_custom_msg__srv__NavigateTurtle_Request *)raw_ros_message;
  {  // x_pose
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_pose);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_pose
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_pose);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
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
// #include "turtlesim_custom_msg/srv/detail/navigate_turtle__struct.h"
// already included above
// #include "turtlesim_custom_msg/srv/detail/navigate_turtle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtlesim_custom_msg__srv__navigate_turtle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("turtlesim_custom_msg.srv._navigate_turtle.NavigateTurtle_Response", full_classname_dest, 65) == 0);
  }
  turtlesim_custom_msg__srv__NavigateTurtle_Response * ros_message = _ros_message;
  {  // navigation_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "navigation_result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->navigation_result = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtlesim_custom_msg__srv__navigate_turtle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavigateTurtle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtlesim_custom_msg.srv._navigate_turtle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavigateTurtle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtlesim_custom_msg__srv__NavigateTurtle_Response * ros_message = (turtlesim_custom_msg__srv__NavigateTurtle_Response *)raw_ros_message;
  {  // navigation_result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->navigation_result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navigation_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
