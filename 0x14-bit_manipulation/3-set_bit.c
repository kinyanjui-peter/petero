#include "main.h"
/**
 * set_bit - set bit at given index to 1
 *@n: int whose inary will be indexed
 *@index: index of the number to eb idexed.
 *Return: new 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	(*n |= (1ul << index));
	return (1);
}
