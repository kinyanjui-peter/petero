#include "main.h"

/**
 **leet : Encodes a string into 1337
 *@n: pointer input *Return: 0
 *Return: n
 */

char *leet(char *n)
{
	int x, y;
	char c1[] = "aAeEooOtTlL";
	char c2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == c1[y])
			{
				n[x] = c2[y];
			}
		}
	}
	return (n);
}
