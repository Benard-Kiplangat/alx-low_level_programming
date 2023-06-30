#include "lists.h"

/**
 * func - a function that prints You're beat! and yet, you must allow,\nI
 *  bore my house upon my back!\n
 *
 * Return: nothing
 */
int func(void) __attribute__((constructor));

int func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
