#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using a malloc
 *
 * @b: the integer to allocate
 *
 * Return: a pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *intptr;

	intptr = malloc(sizeof(int));

	if (intptr == NULL)
		exit(98);

	*intptr = b;
	return (intptr);
}
