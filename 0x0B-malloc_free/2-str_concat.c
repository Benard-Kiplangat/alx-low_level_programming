#include "main.h"
#include <stdlib.h>

/**
 * strsize - a function that counts the number of characters
 * in a string
 *
 * @strptr: a pointer to the string to count
 *
 * Return: the number of characters
 */

int strsize(char *strptr)
{
	int size = 0;

	if (strptr == NULL)
		return (0);
	while (strptr[size] != '\0')
		size++;
	return (size);
}

/**
 * str_concat - a function that concancenate two strings and
 * save it in a memory location allocated by malloc
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to the new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int i2 = 0;
	int size1 = strsize(s1);
	int size2 = strsize(s2);
	int totalsize = size1 + size2;
	char *nwstrptr = (char *)malloc(sizeof(char) * totalsize);

	if (totalsize == 0 || nwstrptr == NULL)
		return (NULL);
	while (i < size1)
	{
		nwstrptr[i] = s1[i];
		i++;
	}
	while (i2 < size2)
	{
		nwstrptr[i] = s2[i2];
		i++;
		i2++;
	}
	nwstrptr[i + 1] = '\0';
	return (nwstrptr);
}
