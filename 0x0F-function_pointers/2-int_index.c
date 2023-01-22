#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 *@name: name
 *@f: function
 *return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, c;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (c);
		}
		for (x = 0; x < size; x++)
		{
			cmp(array[x]);
			if (cmp(array[x]) > 0)
			{
				c = x;
				break;
			}
if ((cmp(array[x]) == (-1)))
		{
			return (c);
		}
		}
	}
	return (c);
}
