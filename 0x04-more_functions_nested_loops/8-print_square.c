#include "main.h"

/**
 * print_square - Print square
 *
 * Return: void
 * @size: argument
 *
 */

void print_square(int size)
{
	int x;

	for (x = 0; x <= size; x++)
	{
		if (size <= 0)
			-putchar('\n');
		else
		_putchar('#');
	}
}
