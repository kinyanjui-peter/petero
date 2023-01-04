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
int c = 0;

for (c = 0; n > 0; c++)
{
s[c] = b;
n--;
}
return (s);
}
