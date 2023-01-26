#include <stdio.h>

/**
 * main - Prints number 0 to 9
 *
 *Return: 0 for success
 */

int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		printf("%d", counter);
	}
	printf("\n");
	return (0);
}
