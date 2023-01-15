#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concernate 2 strings
 *@s1: destinantion string
 *@s2: source string
 *@n: size of string
 *Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	unsigned int x, y;
	unsigned char *p;
	unsigned int s1len, s2len;

	s1len = 0;
	while (s1 && s1[s1len])
		s1len++;
	s2len = 0;
	while (s2 && s2[s2len])
		s2len++;
	if (n > s2len)
	{
		p = ((char *)malloc(sizeof(char)) * (s1len + s2len + 1));
		else
			{
			p = ((char *)malloc(sizeof(char)) * (s1len + n + 1));
			}
			if (p == NULL)
			{
				return (NULL);
			}
		}
		while (s1 < s1len)
		{
		p[x] = s1[x];
		{
			while (s1 <= s2len)
			{
				p[x] = p[y == n];
			}
		}
		}
		return (p);
}
