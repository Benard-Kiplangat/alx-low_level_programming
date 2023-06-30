#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 *
 * Return: 0 rs success
 */

void rev_string(char *s)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; i--)
	{
		_putchar(s[i]);
	}
}
