#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prints name
 *@array: name
 *@size: function
 *@cmp: pointer to array
 *Return: c
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, c;

	c = -1;
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
