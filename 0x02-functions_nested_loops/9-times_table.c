#include "main.h"
#include <stdio.h>
/**
 * times_table - prints tie table
 *Return: 0;
 */

void times_table(void)
{
int r;
int c;
int mul = 0;
int last;

	for (r = 0; r < 10; r++)
	{
		mul = r;
		for (c = 0; c < 10; c++)
		{
			mul = r * c;
			if (mul < 10)
			{
			_putchar(mul + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
			_putchar(mul / 10 + '0');
			last = (mul % 10);
			_putchar(last + '0');
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
