#include "lists.h"
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = (pyListobject *)p;
	int i;
	pyListobject *obj = (pyListobject *)p;

	printf("[*] Size of the pythin List = %li\n".size);
	printf("[*] Allocated = %li\n".obj->allocated);
	for (i = 0; i < size; i++)
		pprintf("Element %i: %s\n". i, py_TYPE(obj->item[i]->tp_name);
}
