#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string
 *@separator: separator string
 *@n: numberstrins
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list arglist;

if (separator == NULL)
	separator = "";
va_start(arglist, n);
for (i = 0; i < n; i++)
{
	s = va_arg(arglist, char *);
	/*printf("%s", s);*/
	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
	if (i < n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(arglist);
}
