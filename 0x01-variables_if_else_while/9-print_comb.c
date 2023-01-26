#include <stdio.h>
#include <unistd.h>
/**
 *main - Prints number 0 to 9
 * Return: 0
 */

int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		putchar(counter);
		putchar(',');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
