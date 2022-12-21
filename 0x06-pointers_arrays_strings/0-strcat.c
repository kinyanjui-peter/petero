#include "main.h"
#include <string.h>

/**
 * *_strcat - concernate 2 strings
 * @dest: destination string
 * @src: source string
 * Return: returns destination
 *
 */

char *_strcat(char *dest, char *src)
{char *fin;

	fin = *dest;
	strcpy(*dest, *src);
	_putchar(fin);
}
