// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from kr_msgs:srv/MoveJoint.idl
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
#include "kr_msgs/srv/detail/move_joint__struct.h"
#include "kr_msgs/srv/detail/move_joint__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool kr_msgs__srv__move_joint__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("kr_msgs.srv._move_joint.MoveJoint_Request", full_classname_dest, 41) == 0);
  }
  kr_msgs__srv__MoveJoint_Request * ros_message = _ros_message;
  {  // jsconf
    PyObject * field = PyObject_GetAttrString(_pymsg, "jsconf");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->jsconf;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // ttype
    PyObject * field = PyObject_GetAttrString(_pymsg, "ttype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ttype = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "tvalue");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tvalue = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "bpoint");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bpoint = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btype
    PyObject * field = PyObject_GetAttrString(_pymsg, "btype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btype = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "bvalue");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bvalue = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sync
    PyObject * field = PyObject_GetAttrString(_pymsg, "sync");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sync = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "chaining");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chaining = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kr_msgs__srv__move_joint__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveJoint_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kr_msgs.srv._move_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveJoint_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kr_msgs__srv__MoveJoint_Request * ros_message = (kr_msgs__srv__MoveJoint_Request *)raw_ros_message;
  {  // jsconf
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jsconf");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->jsconf[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // ttype
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ttype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ttype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tvalue
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bpoint
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btype
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bvalue
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sync
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sync);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sync", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chaining
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->chaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chaining", field);
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
// #include "kr_msgs/srv/detail/move_joint__struct.h"
// already included above
// #include "kr_msgs/srv/detail/move_joint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool kr_msgs__srv__move_joint__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("kr_msgs.srv._move_joint.MoveJoint_Response", full_classname_dest, 42) == 0);
  }
  kr_msgs__srv__MoveJoint_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kr_msgs__srv__move_joint__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveJoint_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kr_msgs.srv._move_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveJoint_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kr_msgs__srv__MoveJoint_Response * ros_message = (kr_msgs__srv__MoveJoint_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}