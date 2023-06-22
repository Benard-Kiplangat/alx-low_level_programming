#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all of its parameters
 *
 * @n: the number of arguments
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 1; i <= n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
