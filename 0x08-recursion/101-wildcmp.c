#include "main.h"

/**
 * wildcmp - a function that tests if two strings are
 * identical
 *
 * @s1: the pointer to the first string to test
 * @s2: the pointer to the second string to test
 *
 * Return: 1 if they're identical or 0 if they're not
 */

int wildcmp(char *s1, char *s2)
{
	char *nullchar = '\0';
	int lenstr1 = _strlen_recursion(s1) - 1;
	int lenstr2 = _strlen_recursion(s2) - 1;

	if (lenstr2 > lenstr1 && (*(s1 + lenstr1) == *(s2  + lenstr2)))
		return (1);
	if (s1 == nullchar && s2 == nullchar)
		return (1);
	return (is_same(s1, s2, lenstr1, lenstr2));
}

/**
 * is_same - a helper to find if a string is
 * a the same as the other
 *
 * @s1: string1 to test
 * @s2: string2 to test
 * @lenstr1: the lenght of the last index of string1
 * @lenstr2: the lenght of the last index of string2
 *
 * Return: 1 or 0 if the strings are identical
 */

int is_same(char *s1, char *s2, int lenstr1, int lenstr2)
{
	char *star = "*";

	if (*(s2 + lenstr2) == *star)
	{
		lenstr2--;
		if (lenstr2 <= 0)
			return (1);
		return (is_same(s1, s2, lenstr1, lenstr2));
	}
	if (*(s2 + lenstr2) != *(s1 + lenstr1))
		lenstr2--;
	if (*(s1 + lenstr1) == *(s2 + lenstr2))
		{
		lenstr1--;
		lenstr2--;
		if (lenstr1 == 0 || lenstr2 <= 0)
			return (1);
		return (is_same(s1, s2, lenstr1, lenstr2));
		}
	return (0);
}

/**
 * _strlen_recursion - a function that returns the lenght of
 * a string using recursion
 * @s: the string to find its lenght
 *
 * Return: the lenght of the string provided
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 1;

	if (*s == '\0')
		return (0);
	else
		return (i + _strlen_recursion(s + 1));
}
