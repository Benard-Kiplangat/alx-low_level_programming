#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - a function that prints anything
 * @format: the format to print a value
 *
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	char *string;
	int i;

	i = 0;
	va_start(pa, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
			printf("%i", va_arg(pa, int));
			break;

			case 'f':
			printf("%f", va_arg(pa, double));
			break;

			case 'c':
			printf("%c", (char) va_arg(pa, int));
			break;

			case 's':
			string = va_arg(pa, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		}

	if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
		printf(", ");
	i++;
	}
	printf("\n");
	va_end(pa);
}
