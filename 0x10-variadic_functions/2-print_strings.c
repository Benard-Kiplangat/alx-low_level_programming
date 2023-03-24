#include <stdlib.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 * @separator: a separator for the strings
 * @n: number of strings passed
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		char *nxtarg;

		nxtarg = va_arg(pa, char *);

		if (nxtarg)
			printf("%s", nxtarg);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
