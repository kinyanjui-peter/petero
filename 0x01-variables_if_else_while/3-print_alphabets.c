#include <stdio.h>
/**
 * main -Print alphabetic in small and capital
 *
 *Return: 0
 *
*/
int main(void)
{
	int counter;

		for (counter = 'a'; counter <= 'z'; counter++)
		{
			putchar(counter);
		}
	for (counter = 'A'; counter <= 'Z'; counter++)
	{
		putchar(counter);
	}
	putchar('\n');
	return (0);
}
