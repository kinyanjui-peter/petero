#include "main.h"
#include <stdint.h>
/**
 * get_endianness - checks endianness
 *
 *Return: 0 or 1
 */
int get_endianness(void)
{
	uint32_t num = 1;

	return (*((uint8_t *) &num));
}

