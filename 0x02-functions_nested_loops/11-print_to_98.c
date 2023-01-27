#include "main.h"
/**
 * print_to_98 - prints to 98
 *@n: last number to print
 *Return: 0
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		_putchar(x + '0');
		_putchar(',');
		_putchar(' ');
	}
}

