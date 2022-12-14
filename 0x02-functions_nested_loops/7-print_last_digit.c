#include "main.h"
/**
 * print_last_digit - Prints the last digit of number.
 *
 * Return: 0
 * @x: passed value
 */

int print_last_digit(int x)
{
int y = x % 10;

_putchar(y);
_putchar('\n');
return (0);
}
