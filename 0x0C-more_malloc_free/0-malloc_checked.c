#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 *@b: value to be allocated memory
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

		p = malloc(b);
		if (p == NULL)
		{
			exit(98);
		}
		return (p);
}
