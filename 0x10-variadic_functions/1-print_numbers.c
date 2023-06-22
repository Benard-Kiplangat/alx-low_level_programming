#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a program that prints numbers followed by
 * a new line
 *
 * @separator: a string pointer to print between numbers
 * @n: the numnber of integers passed to the program
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);

	for (i = 2; i < (n + 2); i++)
	{
		printf("%i", va_arg(pa, int));
		if (separator != NULL)
		{
			if (i != (n + 1))
				printf("%s", separator);
		}
	}
	printf("\n");
}
