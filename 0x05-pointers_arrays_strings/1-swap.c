#include "main.h"

/**
 * swap_int - Swaps the value of
 * @a: first variable parameter
 * @b: second variable pRmeter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
