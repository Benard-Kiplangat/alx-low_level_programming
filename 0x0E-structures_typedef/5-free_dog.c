#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 *
 * @d: pointer to the dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
