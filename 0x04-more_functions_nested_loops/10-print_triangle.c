#include "main.h"

/**
 * print_triangle - Prints a line
 *
 * @size: maximum number of n
 * Return: void
 *
 */

void print_triangle(int size)
{
	int x;
int y;

	for (x = 0; x <= size; x++)
	{
		for (y = 0; y <= x; y++)
		{

		if (size <= 0)
		_putchar('\n');
		else
		_putchar('#');
		}
	_putchar('\n');
	}
	_putchar('\n');
}
