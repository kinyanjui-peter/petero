#include "main.h"

/**
 * _pow_recursion - gives the power of a number;
 * @x: base number
 *@y: poer number
 *Return: power.
 *
 */
int _pow_recursion(int x, int y)
{
	/*int  squared = 0;*/

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));
}
