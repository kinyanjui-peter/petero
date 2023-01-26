#include <stdio.h>

/**
 * main - Prints diffrents decimal combination
 *
 *Return:list
 */

int main(void)
{
	int x, y;
	{
		for (x = 0; x < 10; x++)
		{
			for (y = y + 1; y < 10; y++)
			{
				if (x != y)
				{
					putchar(x);
					putchar(y);
					if (x == '8' && y == '9')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar ('\n');
	}
	return (0);
}
