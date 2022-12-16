#include "main.h"

/**
 * print_most_numbers - Prints 1 to 9
 * Return: void
 *
 */
void print_most_numbers(void);
{
	int y;

	y = 0;
	while (y < 10)
	{
		if (!(y == '2') || (y == '4'))
		-putchar(y);
		y++;
	}
	_putchar('\n');
}

