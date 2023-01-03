#include "main.h"
/**
 *_memset - Fills memory size with a constant byte
 *@s: pointer to memory location
 *@b: constant value
 *@n: size in bytes
 *Return: pointer to pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

for (counter = 0; counter <= n; counter++)
{
(s[counter]) = b;
}
return (s);
}
