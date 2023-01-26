#include <stdio.h>

/**
 * main - Prints diffrents decimal combination
 *
 *Return:list
 */

int main(void)
{
	int x, y, z, i;
	{
		for (x = 0; x < 100; x++)
		{
			for (y = y + 1; y < 100; y++)
			{
				for (z = 0; z < 100; z++)
				{
					for (i = 0; i < 100; i++)
					{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(i);
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar ('\n');
	}
	}
	return (0);
}
