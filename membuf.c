/* $Id$ 
 *
 * pyxmlsec -- A Python binding for XML Security library (XMLSec)
 *
 * Copyright (C) 2003 Easter-eggs, Valery Febvre
 * http://pyxmlsec.labs.libre-entreprise.org/
 * 
 * Author: Valery Febvre <vfebvre@easter-eggs.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <Python.h>

#include "xmlsecmod.h"
#include "transforms.h"
#include "buffer.h"
#include "membuf.h"

PyObject *xmlsec_TransformMemBufId(PyObject *self, PyObject *args) {
  return PyCObject_FromVoidPtr((void *) xmlSecTransformMemBufId, NULL);
}

PyObject *xmlsec_TransformMemBufGetBuffer(PyObject *self, PyObject *args) {
  PyObject *transform_obj;
  xmlSecTransformPtr transform;
  xmlSecBufferPtr buf;
  PyObject *ret;

  if (!PyArg_ParseTuple(args, "O:transformMemBufGetBuffer", &transform_obj))
    return NULL;

  transform = xmlSecTransformPtr_get(PyObject_GetAttr(transform_obj, PyString_FromString("_o")));
  buf = xmlSecTransformMemBufGetBuffer(transform);

  ret = PyCObject_FromVoidPtrAndDesc((void *) buf, (char *) "xmlSecBufferPtr", NULL);
  return (ret);
}