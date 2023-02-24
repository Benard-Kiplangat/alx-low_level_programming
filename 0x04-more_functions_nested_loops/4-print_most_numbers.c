#include "main.h"

/*
 * print_most_numbers - prints numbers from 0-9 except 2 and 4.
 *
 * Alwasy - return 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
