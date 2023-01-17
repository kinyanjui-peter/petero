#include "main.h"

/**
 * _puts_recursion - print a recussive string
 * @s: pointer to the string.
 * Return: pointer ro string s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	return;
	if (*s)
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
