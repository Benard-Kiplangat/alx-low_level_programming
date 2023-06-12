#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the character to use for initialization
 *
 * Return: NULL if size is 0, a pointer to the array,
 * or null if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
	char *arr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
	}
	return (NULL);
}
