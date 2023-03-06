#include "main.h"

/**
 * *_memcpy - a function that copies a memory area
 * @dest: pointer to the address to copy
 * @src: pointer to the source memory area
 * @n: size of characters to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*src[i]  = *dest[i];
	}
return (dest);
}
