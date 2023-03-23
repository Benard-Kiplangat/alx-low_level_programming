#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a char pointer to name
 * @f: function pointer that will print name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *name))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
