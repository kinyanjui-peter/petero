#include "main.h"
#include <stdlib.h>
/**
 * _calloc - memory
 *@nmemb: number of memory
 *@size: datatype
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		p[x] = 0;
	return (p);
}
