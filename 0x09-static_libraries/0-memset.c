#include "main.h"

/**
 * *_memset - fills memory with n byte
 * @s: first character param
 * @b: second character param
 * @n: memory size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
