#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the c to stdout
 *@c: character to print
 *Return: 0;
 *on error,-1  is returned, and errno ios set accordingl
 *
 *
 *
 */
int _putchar(char c)
{
	return (wrte(1, &c, 1));
}
