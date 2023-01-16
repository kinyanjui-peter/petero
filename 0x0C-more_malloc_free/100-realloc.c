#include "main.h"
#include <stdlib.h>
/**
 * _realloc - memory allocation
 *@ptr: pointer to new pointer
 *@old_size: previous size
 *@new_size: new size
 *Return: NULL
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	unsigned int *nptr;

if (new_size > old_size && ptr != NULL)
	{
	nptr = malloc(new_size);
	if (nptr == NULL)
	return (nptr);
	for (x = 0; x < old_size; x++)
	nptr[x] = *((char *)ptr + 1);
if (ptr == NULL)
	{
	nptr = malloc(new_size);
	if (nptr == NULL)
	return (NULL);
	}
if (new_size == old_size)
	{
	return (ptr);
	}
if (new_size == 0 && ptr != NULL)
	free(ptr);
	return (NULL);
	}
	}
return (ptr);
}
