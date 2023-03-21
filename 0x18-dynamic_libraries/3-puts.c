#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: string to be printed to stdout
 * Return: void
 *
 */
void _puts(char *str)
{
        int x = 0;

        while (str[x] != '\0')
        {
        _putchar(str[x]);
        x++;
        }
        _putchar('\n');
}
