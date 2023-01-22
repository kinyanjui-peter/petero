#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print numbers: print numbers
 * main: function main
 *@separator: separates
 *@n: number of integers
 *return: list.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

int main(void)
{
printf("the sum of the %d numbers is: %d", &n, list); 
return (0);
}
/**
 * print_numbers: function variadic
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int no;

var_list list;

var_start(list, n);
for (i = 0; i < n; i++)
{
	no = var_arg(list, int);
	printf("%d%s", no, separator);
	printf("%c", separator);
}
var_end(list);
return (list);
}

