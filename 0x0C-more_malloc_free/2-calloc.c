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

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * 10);
	if (!p)
		return (NULL);
}
