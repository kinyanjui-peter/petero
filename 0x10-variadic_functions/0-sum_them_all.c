#include <stdarg.h>

/**
 * sum_them_all - summing the numberes
 *@n: numbers
 *Return: total or 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int total = 0;
unsigned int i;
va_list sum;

if (n == 0)
	return (0);
va_start(sum, n);
	for (i = 0; i < n; i++)
	{
	total += va_arg(sum, int);
	}
return (total);
va_end(sum);
}
