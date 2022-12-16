#include "main.h"

/**
 * print_numbers - Prints 1 to 9
 * Return: void
 *
 */

void print_numbers(void)
{
char y;

	y = '0';
	while (y < '10')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
}
