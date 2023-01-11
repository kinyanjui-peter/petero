#include "main.h"
#include <stdlib.h>

/**
 *_strdup - copy string
 *@str: string
 *Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * 30);
	if (ptr == 'NULL')
	{
		return (NULL);
	}
	if (str == ('NULL'))
	{
	return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (ptr[j] < str[i])
		{
			ptr[j] = str[i];
			j++;
		}
		i++;
	}
	return (ptr);
	free(ptr);
}
