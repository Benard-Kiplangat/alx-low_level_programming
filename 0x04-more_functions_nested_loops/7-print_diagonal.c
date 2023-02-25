#include "main.h"

/**
* print_diagonal - prints a diagonal
* @n: number that defines the lenght of line
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int i = 1;

	while (i < n + 1)
	{
		if (i <= 0)
			_putchar('\n');
		_putchar(' ');
		if (i == n)
			_putchar('\\');
		i++;
	}
	_putchar('\n');
}
