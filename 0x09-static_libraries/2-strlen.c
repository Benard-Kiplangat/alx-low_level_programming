#include "main.h"
#include <string.h>
/**
 * _strlen - prints the string lenght
 * @s: pointer to s
 * Return: string lenght.
 */

int _strlen(char *s)
{
	int stlen = 0;

	for (; *s++;)
		stlen++;
	return (stlen);
}
