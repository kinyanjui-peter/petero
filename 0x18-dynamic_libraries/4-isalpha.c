#include "main.h"

/**
 * _isalpha - Check if character is lowecase
 * @c: character to be checked
 * Return: 1 or 0
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
