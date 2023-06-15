#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocated memory for an
 * array of nmemb elements
 *
 * @nmemb: number of array elements
 * @size: bytes to allocate
 *
 * Return: a pointer to the allocated memory location or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *almry;

	if (nmemb == 0 || size == 0)
		return (NULL);
	almry = malloc(nmemb * size);

	if (almry == NULL)
		return (NULL);

	return (almry);
}
