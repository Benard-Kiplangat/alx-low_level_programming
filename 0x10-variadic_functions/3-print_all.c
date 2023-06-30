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
	unsigned int i = 0, j, k = 0;
	char *str;
	const char argss[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (argss[j])
		{
			if (format[i] == argss[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), k = 1;
			break;
		case 's':
			str = va_arg(ap, char *), k = 1;
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
