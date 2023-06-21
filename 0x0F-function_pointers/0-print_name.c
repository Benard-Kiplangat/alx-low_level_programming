#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: the name
 * @f: a funtion pointer that returns nothing
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
