#include "main.h"

/**
 * print_diagonal - Print diagonal
 *@n: maximum number
 * Return: 0
 *
 */
void print_diagonal(int n)
{
	int x, y, z;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (x == y)
				_putchar('\\');
			else
				-putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

