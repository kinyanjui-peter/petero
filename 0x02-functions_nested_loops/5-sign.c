#include "main.h"
/**
 * print_sign - prints signs for a number
 * developed by peter
 * Return : 1 or 0
 * @n: interger passed to the function
 */

int print_sign(int n)
{
	int pos = '+';
	int neg = '-';
	int zer	= '0';

	if (n > 0)
		return (1);
	_putchar(pos);
	if (n == 0)
		return (0);
	_putchar(zer);
	if (n < 0)
		return (-1);
			_putchar(neg);
}
