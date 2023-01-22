#include <stdlib.h>
#include "function_pointers.h"
#include  <stdio.h>

/**
 * array_iterator - printd array
 *@array: array
 *@size: array size
 *@action: pointer to array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

if (array == NULL || action == NULL)
	return;
for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
