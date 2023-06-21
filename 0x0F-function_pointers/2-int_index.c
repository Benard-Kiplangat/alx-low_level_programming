#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: function pointer to search the integer
 *
 * Return: return index or -1 if no element matches or if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(*(array + i)))
			return (i);
		i++;
	}

	return (-1);
}
