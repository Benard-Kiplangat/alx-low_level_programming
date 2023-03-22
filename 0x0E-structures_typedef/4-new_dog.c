#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints the struct dog
 *
 * @d: name of the new struct
 */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	int old_name, old_owner;

	dog_t *dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);
	_strlen(name);
	old_name = _strlen(name);
	new_name = malloc((old_name + 1) * sizeof(char));

	if (new_name == NULL)
	{
	free(dog_new);
	return (NULL);
	}

	_strcpy(new_name, name);
	_strlen(owner);
	old_owner = _strlen(owner);
	new_owner = malloc((old_owner + 1) * sizeof(char));
	if (new_owner == NULL)
	{
	free(new_name);
	free(dog_new);
	return (NULL);
	}
	_strcpy(new_owner, owner);
	dog_new->name = new_name;
	dog_new->age = age;
	dog_new->owner = new_owner;

	return (dog_new);
}

/**
 * _strlen - function
 * @s: first operand
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}

/**
 * _strcpy - function
 * @src: copy from
 * @dest: copy to
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	
	dest[i] = '\0';
	return (dest);
}
