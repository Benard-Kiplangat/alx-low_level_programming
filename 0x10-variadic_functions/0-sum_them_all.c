#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: first parameter
 * @...: optional variable parameters
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end (ap);
	return (sum);
}
