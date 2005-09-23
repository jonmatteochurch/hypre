/*
 * File:          sidl_Finder_Module.c
 * Symbol:        sidl.Finder-v0.9.3
 * Symbol Type:   interface
 * Babel Version: 0.10.10
 * Release:       $Name$
 * Revision:      @(#) $Id$
 * Description:   implement a C extension type for a sidl extendable
 * 
 * Copyright (c) 2000-2002, The Regents of the University of California.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by the Components Team <components@llnl.gov>
 * All rights reserved.
 * 
 * This file is part of Babel. For more information, see
 * http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
 * for Our Notice and the LICENSE file for the GNU Lesser General Public
 * License.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License (as published by
 * the Free Software Foundation) version 2.1 dated February 1999.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
 * conditions of the GNU Lesser General Public License for more details.
 * 
 * You should have recieved a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.10
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * This file contains the implementation of a Python C
 * extension type (i.e. a Python type implemented in C).
 * This extension type provides Python interface to the
 * sidl type sidl.Finder.
 */


/**
 * Symbol "sidl.Finder" (version 0.9.3)
 * 
 * Interface <code>Finder</code> is an interface for classes that resolve 
 * dynamic libraries.  
 * Class <code>Loader</code> takes one of these interfaces through the 
 * method <code>setFinder</code>.  If NULL is passed to setFinder, the 
 * class <code>DefaultFinder</code> is used.
 */
#define sidl_Finder_INTERNAL 1
#include "sidl_Finder_Module.h"
#ifndef included_sidl_Finder_IOR_h
#include "sidl_Finder_IOR.h"
#endif
#include "sidlObjA.h"
#include "sidlPyArrays.h"
#include "Numeric/arrayobject.h"
#ifndef included_sidl_Loader_h
#include "sidl_Loader.h"
#endif
#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_sidl_interface_IOR_h
#include "sidl_interface_IOR.h"
#endif
#include "sidl_DLL_Module.h"
#include "sidl_ClassInfo_Module.h"
#include "sidl_BaseInterface_Module.h"
#include <stdlib.h>
#include <string.h>

staticforward PyTypeObject _sidl_FinderType;

static PyObject *
pStub_Finder_addSearchPath(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_Finder__object *_self_ior =
    ((struct sidl_Finder__object *)
     sidl_Cast(_self, "sidl.Finder"));
  if (_self_ior) {
    char* path_fragment = NULL;
    static char *_kwlist[] = {
      "path_fragment",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &path_fragment);
    if (_okay) {
      (*(_self_ior->d_epv->f_addSearchPath))(_self_ior->d_object,             \
        path_fragment);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.Finder");
  }
  return _return_value;
}

static PyObject *
pStub_Finder_setSearchPath(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_Finder__object *_self_ior =
    ((struct sidl_Finder__object *)
     sidl_Cast(_self, "sidl.Finder"));
  if (_self_ior) {
    char* path_name = NULL;
    static char *_kwlist[] = {
      "path_name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &path_name);
    if (_okay) {
      (*(_self_ior->d_epv->f_setSearchPath))(_self_ior->d_object, path_name);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.Finder");
  }
  return _return_value;
}

static PyObject *
pStub_Finder_getSearchPath(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_Finder__object *_self_ior =
    ((struct sidl_Finder__object *)
     sidl_Cast(_self, "sidl.Finder"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      char* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getSearchPath))(_self_ior->d_object);
      _return_value = Py_BuildValue(
        "z",
        _return);
      free((void *)_return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.Finder");
  }
  return _return_value;
}

static PyObject *
pStub_Finder_findLibrary(PyObject *_self, PyObject *_args,                    \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_Finder__object *_self_ior =
    ((struct sidl_Finder__object *)
     sidl_Cast(_self, "sidl.Finder"));
  if (_self_ior) {
    char* sidl_name = NULL;
    char* target = NULL;
    enum sidl_Scope__enum lScope = (enum sidl_Scope__enum) 0;
    enum sidl_Resolve__enum lResolve = (enum sidl_Resolve__enum) 0;
    long _proxy_lScope;
    long _proxy_lResolve;
    static char *_kwlist[] = {
      "sidl_name",
      "target",
      "lScope",
      "lResolve",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "zzll", _kwlist,
      &sidl_name,
      &target,
      &_proxy_lScope,
      &_proxy_lResolve);
    if (_okay) {
      struct sidl_DLL__object* _return = NULL;
      lScope = _proxy_lScope;
      lResolve = _proxy_lResolve;
      _return = (*(_self_ior->d_epv->f_findLibrary))(_self_ior->d_object,     \
        sidl_name, target, lScope, lResolve);
      _return_value = Py_BuildValue(
        "O&",
        (void *)sidl_DLL__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.Finder");
  }
  return _return_value;
}

static int
sidl_Finder_createCast(PyObject *self, PyObject *args, PyObject *kwds) {
  struct sidl_Finder__object *optarg = NULL;
  static char *_kwlist[] = { "sobj", NULL };
  int _okay = PyArg_ParseTupleAndKeywords(args, kwds, "O&", _kwlist,          \
    (void *)sidl_Finder__convert, &optarg);
  if (_okay) {
    return sidl_Object_Init(
      (SPObject *)self,
      (struct sidl_BaseInterface__object *)optarg->d_object,
      sidl_PyStealRef);
  }
  return -1;
}

static PyMethodDef _FinderModuleMethods[] = {
  { NULL, NULL }
};

static PyMethodDef _FinderObjectMethods[] = {
  { "addSearchPath", (PyCFunction)pStub_Finder_addSearchPath,
  (METH_VARARGS | METH_KEYWORDS),
"\
addSearchPath(in string path_fragment)\n\
RETURNS\n\
    None\n\
\n\
\
Append the specified path fragment to the beginning of the\n\
current search path.  If the search path has not yet been set\n\
by a call to <code>setSearchPath</code>, then this fragment will\n\
be appended to the path in environment variable SIDL_DLL_PATH."
   },
  { "findLibrary", (PyCFunction)pStub_Finder_findLibrary,
  (METH_VARARGS | METH_KEYWORDS),
"\
findLibrary(in string sidl_name,\n\
            in string target,\n\
            in sidl.Scope lScope,\n\
            in sidl.Resolve lResolve)\n\
RETURNS\n\
   (sidl.DLL _return)\n\
\n\
\
Find a DLL containing the specified information for a sidl\n\
class. This method searches through the files in set set path\n\
looking for a shared library that contains the client-side or IOR\n\
for a particular sidl class.\n\
\n\
@param sidl_name  the fully qualified (long) name of the\n\
                  class/interface to be found. Package names\n\
                  are separated by period characters from each\n\
                  other and the class/interface name.\n\
@param target     to find a client-side binding, this is\n\
                  normally the name of the language.\n\
                  To find the implementation of a class\n\
                  in order to make one, you should pass\n\
                  the string \"ior/impl\" here.\n\
@param lScope     this specifies whether the symbols should\n\
                  be loaded into the global scope, a local\n\
                  scope, or use the setting in the file.\n\
@param lResolve   this specifies whether symbols should be\n\
                  resolved as needed (LAZY), completely\n\
                  resolved at load time (NOW), or use the\n\
                  setting from the file.\n\
@return a non-NULL object means the search was successful.\n\
        The DLL has already been added."
   },
  { "getSearchPath", (PyCFunction)pStub_Finder_getSearchPath,
  (METH_VARARGS | METH_KEYWORDS),
"\
getSearchPath()\n\
RETURNS\n\
   (string _return)\n\
\n\
\
Return the current search path.  If the search path has not been\n\
set, then the search path will be taken from environment variable\n\
SIDL_DLL_PATH."
   },
  { "setSearchPath", (PyCFunction)pStub_Finder_setSearchPath,
  (METH_VARARGS | METH_KEYWORDS),
"\
setSearchPath(in string path_name)\n\
RETURNS\n\
    None\n\
\n\
\
Set the search path, which is a semi-colon separated sequence of\n\
URIs as described in class <code>DLL</code>.  This method will\n\
invalidate any existing search path."
   },
  { NULL, NULL }
};

static PyTypeObject _sidl_FinderType = {
  PyObject_HEAD_INIT(NULL)
  0,      /* ob_size */
  "sidl.Finder.Finder", /* tp_name */
  0,      /* tp_basicsize */
  0,      /* tp_itemsize */
  0,      /* tp_dealloc */
  0,      /* tp_print */
  0,      /* tp_getattr */
  0,      /* tp_setattr */
  0,      /* tp_compare */
  0,      /* tp_repr */
  0,      /* tp_as_number */
  0,      /* tp_as_sequence */
  0,      /* tp_as_mapping */
  0,      /* tp_hash  */
  0,      /* tp_call */
  0,      /* tp_str */
  0,      /* tp_getattro */
  0,      /* tp_setattro */
  0,      /* tp_as_buffer */
  Py_TPFLAGS_DEFAULT, /* tp_flags */
  "\
\
Interface <code>Finder</code> is an interface for classes that resolve \n\
dynamic libraries.  \n\
Class <code>Loader</code> takes one of these interfaces through the \n\
method <code>setFinder</code>.  If NULL is passed to setFinder, the \n\
class <code>DefaultFinder</code> is used.", /* tp_doc */
  0,      /* tp_traverse */
  0,       /* tp_clear */
  0,       /* tp_richcompare */
  0,       /* tp_weaklistoffset */
  0,       /* tp_iter */
  0,       /* tp_iternext */
  _FinderObjectMethods, /* tp_methods */
  0,       /* tp_members */
  0,       /* tp_getset */
  0,       /* tp_base */
  0,       /* tp_dict */
  0,       /* tp_descr_get */
  0,       /* tp_descr_set */
  0,       /* tp_dictoffset */
  sidl_Finder_createCast,   /* tp_init */
  0,       /* tp_alloc */
  0,       /* tp_new */
};

sidl_Finder__wrap_RETURN
sidl_Finder__wrap sidl_Finder__wrap_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_FinderType.tp_new(&_sidl_FinderType, NULL, NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyStealRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_Finder__weakRef_RETURN
sidl_Finder__weakRef sidl_Finder__weakRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_FinderType.tp_new(&_sidl_FinderType, NULL, NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyWeakRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_Finder_deref_RETURN
sidl_Finder_deref sidl_Finder_deref_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_deleteRef))(sidlobj->d_object);
  }
}

sidl_Finder__newRef_RETURN
sidl_Finder__newRef sidl_Finder__newRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_FinderType.tp_new(&_sidl_FinderType, NULL, NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyNewRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_Finder__addRef_RETURN
sidl_Finder__addRef sidl_Finder__addRef_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_addRef))(sidlobj->d_object);
  }
}

sidl_Finder_PyType_RETURN
sidl_Finder_PyType sidl_Finder_PyType_PROTO {
  Py_INCREF(&_sidl_FinderType);
  return &_sidl_FinderType;
}

sidl_Finder__convert_RETURN
sidl_Finder__convert sidl_Finder__convert_PROTO {
  *sidlobj = sidl_Cast(obj, "sidl.Finder");
  if (*sidlobj) {
    (*((*sidlobj)->d_epv->f_addRef))((*sidlobj)->d_object);
  }
  else if (obj != Py_None) {
    PyErr_SetString(PyExc_TypeError, 
      "argument is not a(n) sidl.Finder");
    return 0;
  }
  return 1;
}

static int
_convertPython(void *sidlarray, const int *ind, PyObject *pyobj)
{
  struct sidl_Finder__object *sidlobj;
  if (sidl_Finder__convert(pyobj, &sidlobj)) {
    sidl_interface__array_set((struct sidl_interface__array *)sidlarray,
    ind, (struct sidl_BaseInterface__object *)sidlobj);
    if (sidlobj) {
      sidl_BaseInterface_deleteRef((struct sidl_BaseInterface__object         \
        *)sidlobj);
    }
    return FALSE;
  }
  return TRUE;
}

sidl_Finder__convert_python_array_RETURN
sidl_Finder__convert_python_array sidl_Finder__convert_python_array_PROTO {
  int result = 0;
  *sidlarray = NULL;
  if (obj == Py_None) {
    result = TRUE;
  }
  else {
    PyObject *pya = PyArray_FromObject(obj, PyArray_OBJECT, 0, 0);
    if (pya) {
      if (PyArray_OBJECT == ((PyArrayObject *)pya)->descr->type_num) {
        int dimen, lower[SIDL_MAX_ARRAY_DIMENSION],
          upper[SIDL_MAX_ARRAY_DIMENSION],
          stride[SIDL_MAX_ARRAY_DIMENSION];
        if (sidl_array__extract_python_info
          (pya, &dimen, lower, upper, stride))
        {
            *sidlarray = (struct                                              \
              sidl_Finder__array*)sidl_interface__array_createRow
            (dimen, lower, upper);
          result = sidl_array__convert_python
            (pya, dimen, *sidlarray, _convertPython);
          if (*sidlarray && !result) {
            sidl_interface__array_deleteRef(
              (struct  sidl_interface__array *)*sidlarray);
            *sidlarray = NULL;
          }
        }
      }
      Py_DECREF(pya);
    }
  }
  return result;
}

static int
_convertSIDL(void *sidlarray, const int *ind, PyObject **dest)
{
  struct sidl_Finder__object *sidlobj = (struct sidl_Finder__object*)
  sidl_interface__array_get((struct sidl_interface__array *)
    sidlarray, ind);
  *dest = sidl_Finder__wrap(sidlobj);
  return (*dest == NULL);
}

sidl_Finder__convert_sidl_array_RETURN
sidl_Finder__convert_sidl_array sidl_Finder__convert_sidl_array_PROTO {
  PyObject *pya = NULL;
  if (sidlarray) {
    const int dimen = sidlArrayDim(sidlarray);
    int i;
    int *lower = (int *)malloc(sizeof(int) * dimen);
    int *upper = (int *)malloc(sizeof(int) * dimen);
    int *numelem = (int *)malloc(sizeof(int) * dimen);
    for(i = 0; i < dimen; ++i) {
      lower[i] = sidlLower(sidlarray, i);
      upper[i] = sidlUpper(sidlarray, i);
      numelem[i] = 1 + upper[i] - lower[i];
    }
    pya = PyArray_FromDims(dimen, numelem, PyArray_OBJECT);
    if (pya) {
      if (!sidl_array__convert_sidl(pya, dimen, lower, upper,
        numelem, sidlarray, _convertSIDL))
      {
        Py_DECREF(pya);
        pya = NULL;
      }
    }
    free(numelem);
    free(upper);
    free(lower);
  }
  else {
    Py_INCREF(Py_None);
    pya = Py_None;
  }
  return pya;
}

void
initFinder(void) {
  PyObject *module, *dict, *c_api;
  static void *ExternalAPI[sidl_Finder__API_NUM];
  module = Py_InitModule3("Finder", _FinderModuleMethods, "\
\
Interface <code>Finder</code> is an interface for classes that resolve \n\
dynamic libraries.  \n\
Class <code>Loader</code> takes one of these interfaces through the \n\
method <code>setFinder</code>.  If NULL is passed to setFinder, the \n\
class <code>DefaultFinder</code> is used."
  );
  dict = PyModule_GetDict(module);
  ExternalAPI[sidl_Finder__wrap_NUM] = (void*)sidl_Finder__wrap;
  ExternalAPI[sidl_Finder__convert_NUM] = (void*)sidl_Finder__convert;
  ExternalAPI[sidl_Finder__convert_python_array_NUM] =                        \
    (void*)sidl_Finder__convert_python_array;
  ExternalAPI[sidl_Finder__convert_sidl_array_NUM] =                          \
    (void*)sidl_Finder__convert_sidl_array;
  ExternalAPI[sidl_Finder__weakRef_NUM] = (void*)sidl_Finder__weakRef;
  ExternalAPI[sidl_Finder_deref_NUM] = (void*)sidl_Finder_deref;
  ExternalAPI[sidl_Finder__newRef_NUM] = (void*)sidl_Finder__newRef;
  ExternalAPI[sidl_Finder__addRef_NUM] = (void*)sidl_Finder__addRef;
  ExternalAPI[sidl_Finder_PyType_NUM] = (void*)sidl_Finder_PyType;
  import_SIDLObjA();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlObjA module.");
  }
  c_api = PyCObject_FromVoidPtr((void *)ExternalAPI, NULL);
  PyDict_SetItemString(dict, "_C_API", c_api);
  Py_XDECREF(c_api);
  import_SIDLPyArrays();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlPyArrays module.");
  }
  import_array();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing Numeric Python module.");
  }
  sidl_BaseInterface__import();
  _sidl_FinderType.tp_base = sidl_BaseInterface_PyType();
  _sidl_FinderType.tp_bases = PyTuple_New(1);
  PyTuple_SetItem(_sidl_FinderType.tp_bases,0,                                \
    (PyObject *)sidl_BaseInterface_PyType());
  if (PyType_Ready(&_sidl_FinderType) < 0) {
    PyErr_Print();
    fprintf(stderr, "PyType_Ready on sidl.Finder failed.\n");
    return;
  }
  Py_INCREF(&_sidl_FinderType);
  PyDict_SetItemString(dict, "Finder", (PyObject *)&_sidl_FinderType);
  sidl_ClassInfo__import();
  sidl_DLL__import();
}