#include "main.h"

/**
 * rev_string - Prints string in reverse
 * @s: parameter
 * Return: revrses string
 *
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	while (s[a] != '\0')
		a++;
	c = 0;
	b = a - 1;
	while (c < b)
	{
		d = s[c];
		s[c] = s[b];
		s[b] = d;
		c++;
		b--;
	}
}

