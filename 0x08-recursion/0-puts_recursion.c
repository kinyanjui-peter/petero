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
	else
	{
		_putchar([s]);
		__puts_recursion(s+1);
	}
	_putchar('\n');
}
	
