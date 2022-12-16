#include <stdio.h>

/**
 * print_diagonal - Print diagonal
 *@n: maximum number
 * Return: 0
 *
 */
void main(void)
	{
		int n;
		
		printf("enter number " );
		scanf("%d", &n);
	int x, y, z;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (x == y)
				printf("\\");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}

