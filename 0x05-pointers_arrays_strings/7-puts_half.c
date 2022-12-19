#include "main.h"

/**
 *puts_half - prints half of string
 *
 * @str: parameter
 *
 * Return: 0;
 */

void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a] != '\n')
		a++;
	b = a / 2;

	if (a % 2 == 1)
		b++;

	while (b < a)
	{
	_putchar(str[b]);
	b++;
	}
	_putchar('\n');
}
