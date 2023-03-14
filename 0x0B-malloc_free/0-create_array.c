#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array  - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the character array
 * Return: return a pointer to an array or NULL on error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
	s[i] = c;
	i++;
	}
	return (s);
}
