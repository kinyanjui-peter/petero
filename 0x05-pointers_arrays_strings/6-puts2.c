#include "main.h"
/**
 * puts2 - Prints characters of a string
 *
 * @str: parameter
 *
 * Return: 0
 *
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
