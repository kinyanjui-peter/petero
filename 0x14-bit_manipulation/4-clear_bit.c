#include "main.h"
/**
 * clear_bit - set bit at given index to 1
 *@n: int whose inary will be indexed
 *@index: index of the number to eb idexed.
 *Return: new 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 0 || index >= CHAR_BIT * sizeof(*n))
	{
		return (-1);
	}
	(*n |= (0u << index));
	return (1);
}
