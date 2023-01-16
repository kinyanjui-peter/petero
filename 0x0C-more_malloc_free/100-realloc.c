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

	ptr = malloc(old_size);
	if (new_size > old_size)
	{
		ptr = (unsigned int *)realloc(ptr, sizeof(unsigned int) * new_size);
		{
		if (ptr == NULL)
		return (NULL);
		}
			if (new_size == old_size)
			{
			ptr = malloc(old_size);
			return (NULL);
			{
			if (new_size == 0 && ptr != NULL)
			free(ptr);
			return (NULL);
			}
			}
			free(ptr);
	}
}
