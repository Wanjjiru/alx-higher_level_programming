#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int measure = PyList_size(p);
	int x;
	PyListObject *objct = (PyListObject *)p

	printf("[*] Size of the Python List = %li\n", measure)
	printf("[*] Allocated = %li\n", objct->allocated);
	for (x = 0; x < measure; x++)
		printf("Element %x: %s\n", x, PY_TYPE(objct->ob_item[x])->tp_name);
}
