#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  print numbers
 *@separator: separates
 *@n: number of integers
 *return: list.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int no;
	va_list list;

if (*separator == '\0')
	return;
{
	va_start(list, n);
for (i = 0; i < n; i++)
{
	no = va_arg(list, int);
	printf("%d", no);
printf("%s", separator);
}
printf("\n");
va_end(list);
}
return;
}

