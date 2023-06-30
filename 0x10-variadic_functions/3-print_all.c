#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print-all - a function that prints anything
 *
 * @format: a list of types of arguments passed
 *
 * Return: nothing
 */

void print_char(char c)
{
	printf("%c", c);
}

void print_int(int a)
{
	printf("%i", a);
}

void print_float(float a)
{
	printf ("%f", a);
}

void print_string(char *s)
{
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0;

	va_start(pa, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
			print_char(va_arg(pa, int));
		if (format[i] == 'i')
			print_int(va_arg(pa, int));
		if (format[i] == 'f')
			print_float(va_arg(pa, double));
		if (format[i] == 's')
			print_string(va_arg(pa, char *));
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
