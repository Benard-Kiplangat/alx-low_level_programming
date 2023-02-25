#include "main.h"

/**
* main - check the c
* Return: Always 0.
*/
void print_line(int n)

{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
			_putchar('\n');
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
