#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * Return : 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}
}
