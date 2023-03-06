#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Returns string position in a string or NULL if not found
 * @s: string
 * @c: character to find
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		i++;
	}
	if (*s == c)
	{
		return (s);

	}

	return (0);
}
