#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *malloc_checked - returns memory address from malloc
 * @b: the size of the memory to return
 *
 * Return: address or 98
 */

void *malloc_checked(unsigned int b)
{
unsigned int *s = malloc(b);

if (s == NULL)
	exit(98);

return (s);
}
