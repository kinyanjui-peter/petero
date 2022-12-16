#include <stdio.h>


/**
 * main - Prints a line
 *
 * @n: maximum number of n
 * Return: void
 *
 */

void main(int n)
{
	int x;

scanf("%d", &n);
	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
		printf("\n");
		else
		printf("_");
	}
	printf("\n");
}
