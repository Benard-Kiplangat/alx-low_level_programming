#include "dog.h"

/**
 * init_dog - a function that initializes the struct dog
 *
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Returns: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
