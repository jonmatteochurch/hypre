/*
 * File:          DLL_Module.c
 * Symbol:        SIDL.DLL-v0.8.2
 * Symbol Type:   class
 * Babel Version: 0.8.4
 * Release:       $Name$
 * Revision:      @(#) $Id$
 * Description:   implement a C extension type for a SIDL extendable
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
 * babel-version = 0.8.4
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * This file contains the implementation of a Python C
 * extension type (i.e. a Python type implemented in C).
 * This extension type provides Python interface to the
 * SIDL type SIDL.DLL.
 */


/**
 * Symbol "SIDL.DLL" (version 0.8.2)
 * 
 * The <code>DLL</code> class encapsulates access to a single
 * dynamically linked library.  DLLs are loaded at run-time using
 * the <code>loadLibrary</code> method and later unloaded using
 * <code>unloadLibrary</code>.  Symbols in a loaded library are
 * resolved to an opaque pointer by method <code>lookupSymbol</code>.
 * Class instances are created by <code>createClass</code>.
 */
#define SIDL_DLL_INTERNAL 1
#include "SIDL_DLL_Module.h"
#ifndef included_SIDL_DLL_IOR_h
#include "SIDL_DLL_IOR.h"
#endif
#include "SIDLObjA.h"
#include "SIDLPyArrays.h"
#include "Numeric/arrayobject.h"
#ifndef included_SIDL_Loader_h
#include "SIDL_Loader.h"
#endif
#ifndef included_SIDL_header_h
#include "SIDL_header.h"
#endif
#ifndef included_SIDL_interface_IOR_h
#include "SIDL_interface_IOR.h"
#endif
#include "SIDL_BaseInterface_Module.h"
#include "SIDL_BaseClass_Module.h"
#include "SIDL_ClassInfo_Module.h"
#include <stdlib.h>
#include <string.h>

static const struct SIDL_DLL__external *_implEPV = NULL;

static PyObject *
pStub_DLL_addRef(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      (*(_self_ior->d_epv->f_addRef))(_self_ior);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_deleteRef(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      (*(_self_ior->d_epv->f_deleteRef))(_self_ior);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_isSame(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    struct SIDL_BaseInterface__object* iobj = NULL;
    static char *_kwlist[] = {
      "iobj",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "O&", _kwlist,
      (void *)SIDL_BaseInterface__convert, &iobj);
    if (_okay) {
      SIDL_bool _return = (SIDL_bool) 0;
      int _proxy__return;
      _return = (*(_self_ior->d_epv->f_isSame))(_self_ior, iobj);
      _proxy__return = _return;
      _return_value = Py_BuildValue(
        "i",
        _proxy__return);
      SIDL_BaseInterface_deref(iobj);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_queryInt(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    char* name = NULL;
    static char *_kwlist[] = {
      "name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &name);
    if (_okay) {
      struct SIDL_BaseInterface__object* _return = NULL;
      _return = (*(_self_ior->d_epv->f_queryInt))(_self_ior, name);
      _return_value = Py_BuildValue(
        "O&",
        (void *)SIDL_BaseInterface__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_isType(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    char* name = NULL;
    static char *_kwlist[] = {
      "name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &name);
    if (_okay) {
      SIDL_bool _return = (SIDL_bool) 0;
      int _proxy__return;
      _return = (*(_self_ior->d_epv->f_isType))(_self_ior, name);
      _proxy__return = _return;
      _return_value = Py_BuildValue(
        "i",
        _proxy__return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_getClassInfo(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      struct SIDL_ClassInfo__object* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getClassInfo))(_self_ior);
      _return_value = Py_BuildValue(
        "O&",
        (void *)SIDL_ClassInfo__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_loadLibrary(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    char* uri = NULL;
    static char *_kwlist[] = {
      "uri",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &uri);
    if (_okay) {
      SIDL_bool _return = (SIDL_bool) 0;
      int _proxy__return;
      _return = (*(_self_ior->d_epv->f_loadLibrary))(_self_ior, uri);
      _proxy__return = _return;
      _return_value = Py_BuildValue(
        "i",
        _proxy__return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_getName(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      char* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getName))(_self_ior);
      _return_value = Py_BuildValue(
        "z",
        _return);
      free((void *)_return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_unloadLibrary(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      (*(_self_ior->d_epv->f_unloadLibrary))(_self_ior);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_lookupSymbol(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    char* linker_name = NULL;
    static char *_kwlist[] = {
      "linker_name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &linker_name);
    if (_okay) {
      void* _return = NULL;
      _return = (*(_self_ior->d_epv->f_lookupSymbol))(_self_ior, linker_name);
      _return_value = Py_BuildValue(
        "O&",
        (void *)SIDL_Opaque_Create, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
pStub_DLL_createClass(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct SIDL_DLL__object *_self_ior =
    ((struct SIDL_DLL__object *)
     SIDL_Cast(_self, "SIDL.DLL"));
  if (_self_ior) {
    char* sidl_name = NULL;
    static char *_kwlist[] = {
      "sidl_name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &sidl_name);
    if (_okay) {
      struct SIDL_BaseClass__object* _return = NULL;
      _return = (*(_self_ior->d_epv->f_createClass))(_self_ior, sidl_name);
      _return_value = Py_BuildValue(
        "O&",
        (void *)SIDL_BaseClass__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a SIDL.DLL");
  }
  return _return_value;
}

static PyObject *
_createCast(PyObject *self, PyObject *args) {
  struct SIDL_DLL__object *optarg = NULL;
  int _okay = PyArg_ParseTuple(args, "|O&", (void *)SIDL_DLL__convert,        \
    &optarg);
  if (_okay) {
    if (optarg) {
      (*(optarg->d_epv->f_addRef))(optarg);
    }
    else {
      optarg = (*(_implEPV->createObject))();
    }
    return SIDL_DLL__wrap(optarg);
  }
  return NULL;
}

static PyMethodDef _DLLModuleMethods[] = {
  { "DLL", _createCast, METH_VARARGS, "Constructor and/or cast method for SIDL.DLL"
   },
  { NULL, NULL }
};

static PyMethodDef _DLLObjectMethods[] = {
  { "addRef", (PyCFunction)pStub_DLL_addRef,
  (METH_VARARGS | METH_KEYWORDS),
"\
addRef()\n\
RETURNS\n\
    None\n\
\n\
\
<p>\n\
Add one to the intrinsic reference count in the underlying object.\n\
Object in <code>SIDL</code> have an intrinsic reference count.\n\
Objects continue to exist as long as the reference count is\n\
positive. Clients should call this method whenever they\n\
create another ongoing reference to an object or interface.\n\
</p>\n\
<p>\n\
This does not have a return value because there is no language\n\
independent type that can refer to an interface or a\n\
class.\n\
</p>"
   },
  { "createClass", (PyCFunction)pStub_DLL_createClass,
  (METH_VARARGS | METH_KEYWORDS),
"\
createClass(in string sidl_name)\n\
RETURNS\n\
   (SIDL.BaseClass _return)\n\
\n\
\
Create an instance of the SIDL class.  If the class constructor\n\
is not defined in this DLL, then return null."
   },
  { "deleteRef", (PyCFunction)pStub_DLL_deleteRef,
  (METH_VARARGS | METH_KEYWORDS),
"\
deleteRef()\n\
RETURNS\n\
    None\n\
\n\
\
Decrease by one the intrinsic reference count in the underlying\n\
object, and delete the object if the reference is non-positive.\n\
Objects in <code>SIDL</code> have an intrinsic reference count.\n\
Clients should call this method whenever they remove a\n\
reference to an object or interface."
   },
  { "getClassInfo", (PyCFunction)pStub_DLL_getClassInfo,
  (METH_VARARGS | METH_KEYWORDS),
"\
getClassInfo()\n\
RETURNS\n\
   (SIDL.ClassInfo _return)\n\
\n\
\
Return the meta-data about the class implementing this interface."
   },
  { "getName", (PyCFunction)pStub_DLL_getName,
  (METH_VARARGS | METH_KEYWORDS),
"\
getName()\n\
RETURNS\n\
   (string _return)\n\
\n\
\
Get the library name.  This is the name used to load the\n\
library in <code>loadLibrary</code> except that all file names\n\
contain the \"file:\" protocol."
   },
  { "isSame", (PyCFunction)pStub_DLL_isSame,
  (METH_VARARGS | METH_KEYWORDS),
"\
isSame(in SIDL.BaseInterface iobj)\n\
RETURNS\n\
   (bool _return)\n\
\n\
\
Return true if and only if <code>obj</code> refers to the same\n\
object as this object."
   },
  { "isType", (PyCFunction)pStub_DLL_isType,
  (METH_VARARGS | METH_KEYWORDS),
"\
isType(in string name)\n\
RETURNS\n\
   (bool _return)\n\
\n\
\
Return whether this object is an instance of the specified type.\n\
The string name must be the <code>SIDL</code> type name.  This\n\
routine will return <code>true</code> if and only if a cast to\n\
the string type name would succeed."
   },
  { "loadLibrary", (PyCFunction)pStub_DLL_loadLibrary,
  (METH_VARARGS | METH_KEYWORDS),
"\
loadLibrary(in string uri)\n\
RETURNS\n\
   (bool _return)\n\
\n\
\
Load a dynamic link library using the specified URI.  The\n\
URI may be of the form \"main:\", \"lib:\", \"file:\", \"ftp:\", or\n\
\"http:\".  A URI that starts with any other protocol string\n\
is assumed to be a file name.  The \"main:\" URI creates a\n\
library that allows access to global symbols in the running\n\
program's main address space.  The \"lib:X\" URI converts the\n\
library \"X\" into a platform-specific name (e.g., libX.so) and\n\
loads that library.  The \"file:\" URI opens the DLL from the\n\
specified file path.  The \"ftp:\" and \"http:\" URIs copy the\n\
specified library from the remote site into a local temporary\n\
file and open that file.  This method returns true if the\n\
DLL was loaded successfully and false otherwise.  Note that\n\
the \"ftp:\" and \"http:\" protocols are valid only if the W3C\n\
WWW library is available."
   },
  { "lookupSymbol", (PyCFunction)pStub_DLL_lookupSymbol,
  (METH_VARARGS | METH_KEYWORDS),
"\
lookupSymbol(in string linker_name)\n\
RETURNS\n\
   (opaque _return)\n\
\n\
\
Lookup a symbol from the DLL and return the associated pointer.\n\
A null value is returned if the name does not exist."
   },
  { "queryInt", (PyCFunction)pStub_DLL_queryInt,
  (METH_VARARGS | METH_KEYWORDS),
"\
queryInt(in string name)\n\
RETURNS\n\
   (SIDL.BaseInterface _return)\n\
\n\
\
Check whether the object can support the specified interface or\n\
class.  If the <code>SIDL</code> type name in <code>name</code>\n\
is supported, then a reference to that object is returned with the\n\
reference count incremented.  The callee will be responsible for\n\
calling <code>deleteRef</code> on the returned object.  If\n\
the specified type is not supported, then a null reference is\n\
returned."
   },
  { "unloadLibrary", (PyCFunction)pStub_DLL_unloadLibrary,
  (METH_VARARGS | METH_KEYWORDS),
"\
unloadLibrary()\n\
RETURNS\n\
    None\n\
\n\
\
Unload the dynamic link library.  The library may no longer\n\
be used to access symbol names.  When the library is actually\n\
unloaded from the memory image depends on details of the operating\n\
system."
   },
  { NULL, NULL }
};

SIDL_DLL__wrap_RETURN
SIDL_DLL__wrap SIDL_DLL__wrap_PROTO {
  return SIDL_Object_Create((struct SIDL_BaseClass__object *) sidlobj,        \
    _DLLObjectMethods, SIDL_PyStealRef);
}

SIDL_DLL__weakRef_RETURN
SIDL_DLL__weakRef SIDL_DLL__weakRef_PROTO {
  return SIDL_Object_Create((struct SIDL_BaseClass__object *) sidlobj,        \
    _DLLObjectMethods, SIDL_PyWeakRef);
}

SIDL_DLL_deref_RETURN
SIDL_DLL_deref SIDL_DLL_deref_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_deleteRef))(sidlobj);
  }
}

SIDL_DLL__newRef_RETURN
SIDL_DLL__newRef SIDL_DLL__newRef_PROTO {
  return SIDL_Object_Create((struct SIDL_BaseClass__object *) sidlobj,        \
    _DLLObjectMethods, SIDL_PyNewRef);
}

SIDL_DLL__addRef_RETURN
SIDL_DLL__addRef SIDL_DLL__addRef_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_addRef))(sidlobj);
  }
}

SIDL_DLL__convert_RETURN
SIDL_DLL__convert SIDL_DLL__convert_PROTO {
  *sidlobj = SIDL_Cast(obj, "SIDL.DLL");
  if (*sidlobj) {
    (*((*sidlobj)->d_epv->f_addRef))(*sidlobj);
  }
  else if (obj != Py_None) {
    PyErr_SetString(PyExc_TypeError, 
      "argument is not a(n) SIDL.DLL");
    return 0;
  }
  return 1;
}

static int
_convertPython(void *sidlarray, const int *ind, PyObject *pyobj)
{
  struct SIDL_DLL__object *sidlobj;
  if (SIDL_DLL__convert(pyobj, &sidlobj)) {
    SIDL_interface__array_set((struct SIDL_interface__array *)sidlarray,
    ind, (struct SIDL_BaseInterface__object *)sidlobj);
    return FALSE;
  }
  return TRUE;
}

SIDL_DLL__convert_python_array_RETURN
SIDL_DLL__convert_python_array SIDL_DLL__convert_python_array_PROTO {
  int result = 0;
  PyObject *pya = PyArray_FromObject(obj, PyArray_OBJECT, 0, 0);
  *sidlarray = NULL;
  if (pya) {
    if (PyArray_OBJECT == ((PyArrayObject *)pya)->descr->type_num) {
      int dimen, *lower, *upper, *stride;
      if (SIDL_array__extract_python_info
        (pya, &dimen, &lower, &upper, &stride))
      {
          *sidlarray = (struct                                                \
            SIDL_DLL__array*)SIDL_interface__array_createRow
          (dimen, lower, upper);
        free(stride);
        free(upper);
        free(lower);
        result = SIDL_array__convert_python
          (pya, dimen, *sidlarray, _convertPython);
        if (*sidlarray && !result) {
          SIDL_interface__array_deleteRef(
            (struct  SIDL_interface__array *)*sidlarray);
          *sidlarray = NULL;
        }
      }
    }
    Py_DECREF(pya);
  }
  return result;
}

static int
_convertSIDL(void *sidlarray, const int *ind, PyObject **dest)
{
  struct SIDL_DLL__object *sidlobj = (struct SIDL_DLL__object*)
  SIDL_interface__array_get((struct SIDL_interface__array *)
    sidlarray, ind);
  *dest = SIDL_DLL__wrap(sidlobj);
  return (*dest == NULL);
}

SIDL_DLL__convert_sidl_array_RETURN
  SIDL_DLL__convert_sidl_array SIDL_DLL__convert_sidl_array_PROTO {PyObject   \
    *pya = NULL;
  if (sidlarray) {
    const int dimen = SIDL_interface__array_dimen(
      (struct SIDL_interface__array *)sidlarray);
    int i;
    int *lower = (int *)malloc(sizeof(int) * dimen);
    int *upper = (int *)malloc(sizeof(int) * dimen);
    int *numelem = (int *)malloc(sizeof(int) * dimen);
    for(i = 0; i < dimen; ++i) {
      lower[i] = SIDL_interface__array_lower(
        (struct SIDL_interface__array *)sidlarray, i);
      upper[i] = SIDL_interface__array_upper(
        (struct SIDL_interface__array *)sidlarray, i);
      numelem[i] = 1 + upper[i] - lower[i];
    }
    pya = PyArray_FromDims(dimen, numelem, PyArray_OBJECT);
    if (pya) {
      if (!SIDL_array__convert_sidl(pya, dimen, lower, upper,
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
  return pya;
}

SIDL_DLL__destroy_sidl_array_RETURN
SIDL_DLL__destroy_sidl_array SIDL_DLL__destroy_sidl_array_PROTO {
  if (sidlarray) {
    SIDL_interface__array_deleteRef(
      (struct SIDL_interface__array *)sidlarray);
  }
}
void
initDLL(void) {
  PyObject *module, *dict, *c_api;
  static void *ExternalAPI[SIDL_DLL__API_NUM];
  module = Py_InitModule3("DLL", _DLLModuleMethods, "\
\
The <code>DLL</code> class encapsulates access to a single\n\
dynamically linked library.  DLLs are loaded at run-time using\n\
the <code>loadLibrary</code> method and later unloaded using\n\
<code>unloadLibrary</code>.  Symbols in a loaded library are\n\
resolved to an opaque pointer by method <code>lookupSymbol</code>.\n\
Class instances are created by <code>createClass</code>."
  );
  _implEPV = SIDL_DLL__externals();
  if (!_implEPV) {
    Py_FatalError("Cannot load implementation for SIDL class SIDL.DLL");
  }
  dict = PyModule_GetDict(module);
  ExternalAPI[SIDL_DLL__wrap_NUM] = (void*)SIDL_DLL__wrap;
  ExternalAPI[SIDL_DLL__convert_NUM] = (void*)SIDL_DLL__convert;
  ExternalAPI[SIDL_DLL__convert_python_array_NUM] =                           \
    (void*)SIDL_DLL__convert_python_array;
  ExternalAPI[SIDL_DLL__convert_sidl_array_NUM] =                             \
    (void*)SIDL_DLL__convert_sidl_array;
  ExternalAPI[SIDL_DLL__destroy_sidl_array_NUM] =                             \
    (void*)SIDL_DLL__destroy_sidl_array;
  ExternalAPI[SIDL_DLL__weakRef_NUM] = (void*)SIDL_DLL__weakRef;
  ExternalAPI[SIDL_DLL_deref_NUM] = (void*)SIDL_DLL_deref;
  ExternalAPI[SIDL_DLL__newRef_NUM] = (void*)SIDL_DLL__newRef;
  ExternalAPI[SIDL_DLL__addRef_NUM] = (void*)SIDL_DLL__addRef;
  import_SIDLObjA();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing SIDLObjA module.");
  }
  c_api = PyCObject_FromVoidPtr((void *)ExternalAPI, NULL);
  PyDict_SetItemString(dict, "_C_API", c_api);
  Py_XDECREF(c_api);
  if (PyErr_Occurred()) {
    Py_FatalError("Cannot initialize Python module SIDL.DLL.");
  }
  import_SIDLPyArrays();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing SIDLPyArrays module.");
  }
  import_array();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing Numeric Python module.");
  }
  SIDL_BaseInterface__import();
  SIDL_BaseClass__import();
  SIDL_ClassInfo__import();
}
