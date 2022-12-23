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
	int counter;
	int last;
	
	counter = 0;
	while (dest[counter++] != '\0')
	{
		counter++;
	}
	last = 0;
	while (src[last] != '\0')
	{
	dest[counter] = src[last];
	last++;
	counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
