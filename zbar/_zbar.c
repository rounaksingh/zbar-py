#include <Python.h>

static PyMethodDef NoMethods[] =
{
     {NULL, NULL, 0, NULL}
};


#if PY_MAJOR_VERSION < 3

PyMODINIT_FUNC
init_zbar(void)
{
    Py_InitModule("_zbar", NoMethods);
}

#else

static struct PyModuleDef zbarmodule = {
   PyModuleDef_HEAD_INIT,
   "_zbar",
   NULL,
   -1,
   NoMethods
};

PyMODINIT_FUNC
PyInit__zbar(void)
{
    return PyModule_Create(&zbarmodule);
}
#endif