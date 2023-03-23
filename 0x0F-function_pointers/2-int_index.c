#include "function_pointers.h"

/**
 * int_index - a function that finds an index place of a comparison
 * @array: an array to compare elements
 * @size: the number of elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: 0 if false, int_index if found, or -1 if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
