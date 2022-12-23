#include "main.h"

/**
 * *_strcat - concernate 2 strings
 * @dest: destination string
 * @src: source string
 * Return: returns destination
 *
 */

char *_strcat(char *dest, char *src)
{
	int counter = 0;
	int last = 0;

	while (dest[counter++])
	last++;
	for (counter = 0; src[counter]; counter++)
	{dest[last] = src[counter];
	counter++;
	last++;
	}
	dest[counter] = '\0';
	return (dest);
}
