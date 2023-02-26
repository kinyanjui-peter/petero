#include "main.h"
/**
 * set_bit - set bit at given index to 1
 *@n: int whose inary will be indexed
 *@index: index of the number to eb idexed.
 *Return: new 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		return (-1);
	}
	(*n = (1uL << index) * n);
	return (1);
}
