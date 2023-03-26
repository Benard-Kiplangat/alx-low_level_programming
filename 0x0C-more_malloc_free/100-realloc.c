#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function to reallocate memory block with malloc and free
 * @ptr: pointer to the memory previously allocated with
 * @old_size: bytes allocated for ptr
 * @new_size: bytes of new memory block
 *
 * Return: pointer to new mem block, NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrnw;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptrnw = malloc(new_size);
		if (ptrnw == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		ptrnw = malloc(new_size);
		if (ptrnw == NULL)
			return (ptrnw);
		for (i = 0; i < old_size; i++)
			ptrnw[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (ptrnw);
}
