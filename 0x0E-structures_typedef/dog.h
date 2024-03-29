#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for a dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct that describes a dog's name, age, and owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
