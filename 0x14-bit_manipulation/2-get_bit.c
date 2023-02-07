#include "main.h"
/**
 * get_bit - gets the index of  BIT
 *@n: the number
 *@index: index
 *Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n & (1 << index)) != 0;
}
