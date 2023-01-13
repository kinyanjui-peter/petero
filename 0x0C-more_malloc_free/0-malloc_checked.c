#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 *@b: value to be allocated memory
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{		 int a;
	unsigned int *p;

		p = &b;
		p = (unsigned int *)malloc(sizeof(int) * b);
		if (p == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(p[a]);
			}
			free(p);
			exit(98);
		}
		return (p);
}
