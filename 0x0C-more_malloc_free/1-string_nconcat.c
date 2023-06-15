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
	char *nulchar = '\0';
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int ni = 0;
	unsigned int nj = 0;

	if (s1 == NULL)
		s1 = nulchar;
	if (s2 == NULL)
		s2 = nulchar;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; (s1[j] != '\0') && (j < n); j++)
		;

	strn = malloc(sizeof(char) * (i + j + 1));

	if (strn == NULL)
		return (NULL);

	for (ni = 0; ni < i; ni++)
		strn[ni] = s1[ni];

	for (nj = 0; ni < (i + j); nj++)
	{
		strn[ni] = s2[nj];
		ni++;
	}

	return (strn);
}
