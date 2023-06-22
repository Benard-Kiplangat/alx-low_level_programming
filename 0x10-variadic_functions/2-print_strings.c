#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a program that prints strings
 *
 * @separator: a string that separates the strings to be printed
 * @n: the number of strings to print
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *emp = "";
	char *next;

	va_start(pa, n);

	for (i = 2; i < (n + 2); i++)
	{
		next = va_arg(pa, char *);

		printf("%s", ((next == NULL) || (*next == *emp)) ? "(nil)" : next);

		if (separator != NULL && (i != (n + 1)))
			printf("%s", separator);
	}
	printf("\n");
}
