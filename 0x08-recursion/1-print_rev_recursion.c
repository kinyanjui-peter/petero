#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * length - Calculate the length
 * @s: string
 * Return: reversed string
 */
int length(char *s)
{
	if (*s == '\0')
	return;
	else
	{
		return ((1 + length(s + 1)));
	}
	return (s);
}

void _print_rev_recursion(char *s)
{
	int x;

	x = s[length()];

	if (x < 0)
	return;
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
