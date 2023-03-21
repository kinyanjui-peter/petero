#include "main.h"

/**
 * _islower - Check if character is lowecase
 *
 * Return: 1 or 0
 * @c: passed value
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
} 
