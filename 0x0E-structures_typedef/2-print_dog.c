#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints the struct dog
 *
 * @d: name of the new struct
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");

	else
		printf("Name: %s\n", d->name);

	printf("Owner: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");

	else
		printf("Owner: %s\n", d->owner);
}
