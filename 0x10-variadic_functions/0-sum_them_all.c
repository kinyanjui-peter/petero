#include <stdarg.h>

/**
 * sum_them_all - summing the numberes
 * main - main function
 *@n: numbers
 *
 *Return: var-arg
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int total = 0;
unsigned int i;

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
