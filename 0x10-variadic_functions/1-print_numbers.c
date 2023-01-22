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


va_start(list, n);
for (i = 0; i < n; i++)
{
	no = va_arg(list, int);
	printf("%d", no);
	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(list);
return;
}
