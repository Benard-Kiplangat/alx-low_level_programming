#include "main.h"

/**
* print_line - prints straight line
* @n: number that defines the lenght of line
* Return: Always 0.
*/
void print_line(int n)

{
	int i = 1;

	while (i < n + 1)
	{
		if (i <= 0)
			_putchar('\n');
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
