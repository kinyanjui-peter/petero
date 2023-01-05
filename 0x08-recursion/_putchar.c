#include "main.h"
/**
 * _putchar.c - prints passed character
 *
 * @c: passed arguments
 * Return: 1, c ,-1
 */
int _putchar(char c)
{
return (write(1, &c, -1));
}
