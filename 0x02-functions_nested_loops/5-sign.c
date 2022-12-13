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
	{
	putchar(pos);
	return (1);
	}	
	else if(n == 0)
	{
	_putchar(zer);
	return (0);
	}
	else
	{
	_putchar(neg);
	return (-1)
	}
}
