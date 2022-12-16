#include "main.h"

/**
 * print_numbers - Prints 1 to 9
 * Return: void
 *
 */

void print_numbers(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
