#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(pa, int));

		else
			printf("%d%s", va_arg(pa, int), separator);
	}

	printf("\n");

	va_end(pa);
}
