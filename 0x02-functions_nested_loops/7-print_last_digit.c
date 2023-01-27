#include "main.h"
/**
 * print_last_digit - Prints the last digit of number.
 *@x: passed value
 *Return: 0
 */

int print_last_digit(int x)
{
int y = 0;

y = x % 10;
if (y < 0)
y *= -1;
_putchar(y + '0');
return (y);
_putchar('\n');
}
