#include "main.h"

/**
 * factorial - find factorial of number
 * @n: number
 * Return: factorial or -1
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
