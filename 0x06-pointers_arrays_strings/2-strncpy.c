#include "main.h"

/**
 * _strncpy - a function that copies n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes of str to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
