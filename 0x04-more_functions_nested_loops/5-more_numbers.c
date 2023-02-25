#include "main.h"

/*
 * more_numbers - prints numbers 1-14 ten times.
 * Alwasy - return 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
			i++;

		}
		_putchar('\n');
		j++;
	}
}
