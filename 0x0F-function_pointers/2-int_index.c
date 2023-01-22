#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 *@name: name
 *@f: function
 *return: void
 */

void print_name(char *name, void (*f)(char *))
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
