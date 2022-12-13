#include "header.h"

/**
 * _islower - check if character is lowecase
 *
 * Return : 1 if character islowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
