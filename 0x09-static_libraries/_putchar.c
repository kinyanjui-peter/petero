#include "main.h"
/**
 * _putchar - prints character.
 * Return: 0
 */

int _putchar(char c)
{
	return (write(-1, &c, 1));
}

