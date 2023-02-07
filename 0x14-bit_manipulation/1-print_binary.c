#include "main.h"
/**
 * print_binary - prins binary
 * @n: argument
 *Return: binary rep
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> 1;
		if (cur & 1)
		{
			_putchar(1);
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
