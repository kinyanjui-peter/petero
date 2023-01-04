#include "main.h"
/**
 * _strchr - locate a character in string
 *@s: string
 *@c: character to be located
 *
 *Return: character c occurence
 */

char *_strchr(char *s, char c)
{
	int x;
	char *y;

	y = s;
	x = 0;
	for (; y[x] >= '\0'; x++)
	{			
		if (y[x] == c)
		return (&y[x]);
	}
	return (0);
}
