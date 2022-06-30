#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject* func2(PyObject* self) {
    return PyLong_FromLong(2);
}

static PyMethodDef module2_methods[] = {
    {"func2", (PyCFunction)func2, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}   /* sentinel */
};

static struct PyModuleDef module2 = {
    PyModuleDef_HEAD_INIT,
    "minnpd.module2",
    NULL,
    -1,
    module2_methods
};

PyMODINIT_FUNC
PyInit_module2(void)
{
    return PyModule_Create(&module2);
}
