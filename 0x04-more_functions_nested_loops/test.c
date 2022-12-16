#include <stdio.h>
#include "main.h"

/**
 * main - Prints 1 to 9
 * Return: void
 *
 */

void main(void)
{
	int y;

	for (y = -1; y <= 10; y++)
	{
		printf("%d", y);
		putchar(y);
	}
	putchar('\n');
}
