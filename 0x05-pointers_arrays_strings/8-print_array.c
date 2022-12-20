#include "main.h"
#include <stdio.h>

/**
 * print_array - Print array elements
 * @a: parameter array
 * @n: parameter number of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
