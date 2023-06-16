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
	unsigned int i;
	char *almry = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (almry == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		almry[i] = 0;

	return (almry);
}
