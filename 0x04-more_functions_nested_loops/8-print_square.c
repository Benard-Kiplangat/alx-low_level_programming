#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @n: The size of the square.
 * @i: height
 * @j: width
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');

			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
