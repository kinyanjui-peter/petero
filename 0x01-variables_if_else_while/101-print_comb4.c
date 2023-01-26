#include <stdio.h>

/**
 * main - Prints diffrents decimal combination
 *
 *Return:list
 */

int main(void)
{
	int x, y, z;
	{
		for (x = 0; x < 10; x++)
		{
			for (y = y + 1; y < 10; y++)
			{
				for (z = 0; z < 10; z++)
				{
				if (x != y && y != z && z != x) 
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && y == '8' && z == '9')
					continue;
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
