#include "main.h"

/**
 * _atoi - String to interger
 * @s: Pointer
 *
 * Return: void
 */

int _atoi(char *s)
{
	int x;
	unsigned int n;
	char *t;

	x = 1;
	n = 0;
	t = s;

	while (*t != '\0' && (*t < '0' || *t > '9'))
	{
		if (*t == '-')
			x *= -1;
		t++;
	}
	if (*t != '\0')
	{
		do {
			n = n * 10 + (*t - '0');
			t++;
		} while (*t >= '0' && *t <= '9');
	}
	return (0);
}
