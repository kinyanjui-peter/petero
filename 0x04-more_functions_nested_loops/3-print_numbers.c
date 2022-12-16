#include "main.h"

/**
 * print_numbers - Prints 1 to 9
 * Return: void
 *
 */
void print_numbers(void);
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
}
