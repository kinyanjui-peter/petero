#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name
 *@name: name ofthe object
 *@f: pointer to the name
 *Return: void
 */
void(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	f(name);
}
