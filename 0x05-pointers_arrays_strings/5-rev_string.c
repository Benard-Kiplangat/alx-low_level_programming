#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 * @a: placeholder array
 * @c: for the loop
 * Return: 0 is success
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	char a[i];
	int c = i - 1;
	for (; c >= 0; c--)
	{
		*a += s[c];
		*s = *a;
	}
}
