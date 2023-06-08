#include "main.h"

/**
 * is_palindrome - a function that tests if a string is
 * a palindrome
 *
 * @s: the string pointer to the string to test
 *
 * Return: 1 if it is a palindrome or 0 if it is not
 */

int is_palindrome(char *s)
{
	char *nullchar = '\0';
	int frst = 0;
	int end = _strlen_recursion(s) - 1;

	if (s == nullchar)
		return (1);
	return (is_palin(s, frst, end));
}

/**
 * is_palin - a helper to find is a string is
 * a palindrome
 *
 * @strng: the string to test
 * @frst: index of the string from the first
 * @end: index of the string from the end
 *
 * Return: 1 or 0 if not palindrome
 */

int is_palin(char *strng, int frst, int end)
{
	if (*(strng + frst) == *(strng + end))
		{
		frst++;
		end--;
		if (end == 0)
			return (1);
		return (is_palin(strng, frst, end));
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
