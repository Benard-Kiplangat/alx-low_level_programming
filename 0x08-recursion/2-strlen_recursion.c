#include "main.h"

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
