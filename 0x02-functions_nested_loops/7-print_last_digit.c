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
y = y * -1;
_putchar(y + '0');
_putchar('\n');
return (y);
}
