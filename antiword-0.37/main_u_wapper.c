#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Python.h"
#include "main_u.c"

static PyObject *Antiword_antiword(PyObject *self, PyObject *args) {
    int num;
    char ** str;
    if (!PyArg_ParseTuple(args, "ies", &num)) return NULL;
    return (PyObject *) Py_BuildValue("i", antiwordx(num, str));
}


static PyMethodDef AntiwordMethods[] = {
        {"antiword",    Antiword_antiword,    METH_VARARGS},
        {NULL, NULL}
};

static struct PyModuleDef antiwordmodule = {
        PyModuleDef_HEAD_INIT,
        "Antiword",
        NULL,
        -1,
        AntiwordMethods
};

PyMODINIT_FUNC
PyInit_Antiword(void) {
    PyObject *m;
    m = PyModule_Create(&antiwordmodule);
    if (m == NULL)
        return NULL;
    return m;
}
