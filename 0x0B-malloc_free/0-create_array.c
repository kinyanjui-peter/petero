#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and initialize an array of characters
 * @size: size
 * @c: character
 * Return: pointer to return
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;
	
	
	ptr = c;	
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
	 c = _putchar(ptr[x]);
	}
	ptr[0] = 'P';
	_putchar('\0');
	return (ptr);
	free(ptr);
}


