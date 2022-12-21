#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: source file
 * @n: bytes
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	int fin = 0;

	while (dest[counter++])
		fin++;
	for (counter = 0; src[counter] && counter < n; counter++)
		dest[fin] = src[counter];
	return (dest);
}
