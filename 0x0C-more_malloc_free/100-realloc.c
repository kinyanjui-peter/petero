#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	p = malloc(old_size);
	if (new_size > old_size)
	{
		p = (unsigned int *)realloc(ptr, sizeof(unsigned int) * new_size);
		{
		if (p == NULL)
		return (NULL);
		}
			if (new_size == old_size)
			{
			p = malloc(old_size);
			return (NULL);
			{
			if (new_size == 0 && p != NULL)
			free(p);
			return (NULL);
			}
			}
			free(p);
	}
}
