#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 **_strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string copy
 * Return: pointer to the new memory allocation
 */

char *_strdup(char *str)
{
char *s;
int i, j = 0;

if (str == NULL)
	return (NULL);

for (i = 0; str[i] != '\0'; i++)
	;

s = malloc(sizeof(char) * i + 1);

if (s == NULL)
	return (NULL);

for (j = 0; j <= i; j++)
	s[j] = str[j];
return (s);
}
