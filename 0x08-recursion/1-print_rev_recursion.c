#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * length - Calculate the length
 * @s: string
 * Return: c length
 */

int length(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
	return (c);
	c++;
	length(s + 1);
}

void _print_rev_recursion(char *s)
{
	int x;

	x = length(s);
	if (x < 0)
	return;
		_putchar(s[x - 1]);
		_print_rev_recursion(s);
}
