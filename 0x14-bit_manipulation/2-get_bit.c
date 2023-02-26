#include "main.h"
/**
 * get_bit - gets the index bit of  
 *@n: the number
 *@index: index
 *Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = 0;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
