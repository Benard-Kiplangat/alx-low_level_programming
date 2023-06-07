#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed
 *			by a newline, printing each character using
 *			recursion.
 * @s: *s is a pointer to the string to print
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		char *newline = "\n";

		_putchar(*newline);
	}
	else
	{

		char *ns = s + 1;

		_putchar(*s);
		_puts_recursion(ns);
	}
}
