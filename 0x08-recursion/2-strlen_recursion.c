#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of
 * 			a string using recursion
 * @s: the string to find its lenght
 *
 * Return: the lenght of the string provided
 */

unsigned int i = 0;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return i;
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return i;
}
