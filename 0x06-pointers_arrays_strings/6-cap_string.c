#include "main.h"

/**
 * cap_string - function to capitalize every word of a string
 * @s: the string to be modified
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z' && s[i] != spe[i])
			s[i] -= 32;
	}
	return (s);
}
