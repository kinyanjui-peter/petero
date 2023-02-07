#include "main.h"
/**
 * flip_bits - returns flips from one number to the next
 *@n: number
 *@m: index
 *Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = n ^ m;
	int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
