#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that allocates a memory block using
 * malloc and free
 *
 * @ptr: a pointer to the memory previously allocated by malloc
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size for the new memory block
 *
 * Return: a void pointer to the new memory block or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nwblock;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		nwblock = malloc(sizeof(ptr) * (old_size + (new_size - old_size)));
		nwblock = ptr;
	}
	free(ptr);
	return (nwblock);
}
