#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to be printed
 * Return: The length of the string
 */

void _puts(char *strng)
{
	int i;

	while (strng[i] != '\0')
	{
		_putchar(strng[i]);
		i++;
	}
	_putchar('\n');
}
