#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * length - Calculate the length
 * @s: string
 * Return: reversed string
 */
int length(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

void _print_rev_recursion(char *s)
{
	int x;

	x = [length(s)];
	if (x == 0)
		return;
		_putchar(s[--x]);
		_print_rev_recursion(s);
}
