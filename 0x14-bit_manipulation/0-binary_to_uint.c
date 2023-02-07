#include "main.h"
/**
 * binary_to_uint - converst binary to digits
 *@b: arguments
 *Return: null or coverted strings
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c;
	unsigned int bin = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		bin = 2 * bin + ((b[c] - '0'));
	}
return (bin);
}
