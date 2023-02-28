#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: The string to be printed in rev
*/

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(j[i]);
	}
	_putchar('\n');
}
