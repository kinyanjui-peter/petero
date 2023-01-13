#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concanate
 *@s1: destination string
 *@s2: source string
 *Return: pointer to s!
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL || s2 == NULL)
	return ("");

	p = (char *)malloc(sizeof(char) * 20);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(p + i) = *(s1 + i);
		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			*(p + i) = *(s2 + j);
			i++;
		}
		}
	return (p);
	free(p);
}
