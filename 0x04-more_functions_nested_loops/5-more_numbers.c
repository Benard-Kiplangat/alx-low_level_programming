#include "main.h"

/*
 * more_numbers - prints numbers 1-14 ten times.
 *
 * Alwasy - return 0
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		for (; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
