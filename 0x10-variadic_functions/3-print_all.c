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

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *str;
	char args[4] = "icfs";

	va_start(valist, format);

	while (format != NULL && format[i] != NULL)
	{
		while (args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	
	printf("\n"), va_end(ap);
}
