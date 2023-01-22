#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name
 *@name: name ofthe object
 *@f: pointer to the name
 *retun: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(f == NULL)
		return;
	f(name);
}
