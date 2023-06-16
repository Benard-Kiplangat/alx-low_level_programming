#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using a malloc
 *
 * @b: the integer to allocate
 *
 * Return: a pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned long int b)
{
	unsigned int *intptr = malloc(b);

	if (intptr == NULL)
		exit(98);

	return (intptr);
}
