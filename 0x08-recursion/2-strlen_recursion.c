#include "main.h"
/**
 * _strlen_recursion - print reverse
 * length - Calculate the length
 * @s: string
 * Return: reversed string
 */
int _strlen_recursion(char *s)
	{
		int x;

	if (*s == '\0')
	return 0;
	else
	{
		x = (1 +  _strlen_recursion(s + 1));
	}
	return (x);
}
