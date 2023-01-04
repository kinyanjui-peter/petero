#include "main.h"

/**
 * _strpbrk - Locates occurence of a string inthe other
 *@s: 1st string
 *@accept: 2nd string
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}
		s++;
	}
	return ('\0');
}
