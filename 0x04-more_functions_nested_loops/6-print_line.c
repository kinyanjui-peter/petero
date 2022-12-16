#include "main.h"

/**
 * print_line - Prints a line
 *
 * @n: maximum number of n
 * Return: void
 *
 */

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n == 0)
		_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
