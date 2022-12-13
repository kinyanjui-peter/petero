#include "main.h"

/**
 * _islower - check if character is lowecase
 *
 * Return : 1 or 0
 *
 * parameter passes a value ofpe int 
 * 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
