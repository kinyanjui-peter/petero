#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - summing the numberes
 * main - main function
 *@n: numbers
 *
 *Return: var-arg
 */
int sum_them_all(const unsigned int n, ...);

int main(void)
{
printf("summation is %d", sum_them_all(2, 20, 30));
return (0);
}
/**
 * sum_them_all -  variadic function
 *Return: total
 *
 */
int sum_them_all(const unsigned int n, ...)
{
int total;
int i;

if (n == 0)
	return (0);
va_list sum;
va_start(sum, n);
	for (i = 0; i < n; i++)
	{
	total += va_arg(sum, int);
	}
va_end(sum);
return (total);
}
