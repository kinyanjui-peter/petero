#include "main.h"

/**
 * _strstr - find a string occurence
 *@haystack: pointer input string
 *@needle: pointer to input string
 *Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (*haystack == needle[x])
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
