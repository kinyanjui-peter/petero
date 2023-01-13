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
{
	int x;
	unsigned int *p;


	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	p = (unsigned int *)malloc(sizeof * n (int));
		{
			if (p == NULL)
			{
				return(NULL);
			}
		}
		for (x = 0; s1[x] != '\0'; x++)
		{
			p[x] = s[x];
			for (y = 0; s2[y] != '\0'; y++)
			{
				if (n >= strlen(*s2[y]))
				{
				p[x] = p[x] +s2[y];
				}
				else 
				{
					p[x] += *s2[n];
				}
			}
		}
		free(p);
		return (p);
}		
