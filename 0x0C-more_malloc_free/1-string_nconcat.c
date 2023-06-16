#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: number of first bytes of s2
 *
 * Return: return pointer to the newly allocated space or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strn;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int ni = 0;
	unsigned int nj = 0;

	for (; s1[i] != '\0'; i++)
		;
	for (; (s2[j] != '\0') && (j <= n); j++)
		;

	strn = malloc(sizeof(char) * (i + j + 1));

	if (strn == NULL)
		return (NULL);

	for (ni = 0; ni < i; ni++)
		strn[ni] = s1[ni];

	for (; ni < (i + j); ni++)
	{
		strn[ni] = s2[nj];
		nj++;
	}
	strn[ni] = '\0';

	return (strn);
}
