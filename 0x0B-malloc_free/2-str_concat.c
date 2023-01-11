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

	s1 = (char *)malloc(sizeof(char) * 20);
	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return ('\0');
	}

	i = 0;
	while (s1[i] == '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			s1[i] += s2[j];
			j++;
		}
	}
	return (s1);
	free(s1);
	free(s2);
}

