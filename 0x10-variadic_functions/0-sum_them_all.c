#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Redtsdurns the sum of all its paramters.
 * @n: The number   of paramters passed to the function.
 * @...: A variable ndsusd mber of paramters to calculatesd s  the sum of.
 * Return: If n == 0 - 0 ssd
 *         Otherwise - tsd s  s he sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum)
}
