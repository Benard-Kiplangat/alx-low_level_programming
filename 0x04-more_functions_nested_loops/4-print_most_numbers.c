#include "main.h"

/*
 * print_most_numbers - prints numbers from 0-9 except 2 and 4.
 *
 * Always - return 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
