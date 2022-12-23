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

	while (dest[counter++] != '\0')
	{
		counter++;
	}
	for (last = 0; src[last]; last++)
	{
	dest[counter] = src[last];
	last++;
	}
	dest[counter] = '\0';
	return (dest);
}
