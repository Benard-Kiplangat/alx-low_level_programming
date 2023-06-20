#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 *
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: a new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *anewdog = malloc(sizeof(dog_t));

	if (anewdog == NULL)
		return (NULL);

	anewdog->name = name;
	anewdog->age = age;
	anewdog->owner = owner;

	return (anewdog);
}
