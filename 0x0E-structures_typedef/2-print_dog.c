#include "dog.h"
#include "stdio.h"

/**
 * print_dog - a function that prints struct dog
 *
 * @d: pointer to the struct dog
 *
 * Returns: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
