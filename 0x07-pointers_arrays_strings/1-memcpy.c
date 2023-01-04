#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: memory size
 *
 *
 *Return: dest
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter = 0;
	int x = n;

	for (; counter < x; counter++)
	{
		dest[counter] = src[counter];
		x--;
	}
	return (dest);
}
