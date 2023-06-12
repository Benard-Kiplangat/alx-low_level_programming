#include "main.h"
#include "stdlib.h"

/**
 * _strdup - a string that copies a string pointer into
 *   the memory allocated
 *
 * @str: pointer to the string to copy
 *
 * Return: a pointer to the string duplicate or NULL
 */

char *_strdup(char *str)
{
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	if (size > 0)
	{
		char *strcpy = (char *)malloc(sizeof(char) * (size + 1));
		int size2 = 0;

		if (size == 0)
		{
			strcpy[0] = '\0';
			return strcpy;
		}
		while (size2 < size)
		{
			strcpy[size2] = str[size2];
			size2++;
		}
		strcpy[size2 + 1] = '\0';
		return (strcpy);
	}
	return (NULL);
}
