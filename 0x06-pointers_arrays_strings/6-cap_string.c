#include "main.h"

/**
 * *cap_string - capitalize all string
 * @i: pointer
 * Return: 0
 */

char *cap_string(char *i)
{
	int x = 0;

	while (i[x])
	{
		while (!(i[x] >= 'a' && i[x] <= 'z'))
		x++;
		if (i[x -1] ==  ' '  ||
		i[x -1] == '\t' ||
		i[x -1] == '\n' ||
		i[x -1] == ',' ||
		i[x -1] == ';' ||
		i[x -1] == '.' ||
		i[x -1] == '!' ||
		i[x -1] == '?' ||
		i[x -1] == '"' ||
		i[x -1] == '(' ||
		i[x -1] == ')' ||
		i[x -1] == '{' ||
		i[x -1] == '}' ||
		x == 0)
			i[x] == 32;
		x++;
	}
	return (x);
}
