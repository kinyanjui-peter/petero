#include "main.h"

/**
 * more_numbers - Prints 1-14
 *
 * Return: 0;
 *
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; x++)
		{
			if (y >= 10)
			{
				_putchar('1');
			}
		_putchar(y % 10 + '0');

		}
		_putchar('\n');
	}
}
