#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using linear search algorith
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in the array
 * @value: the value to search for
 *
 * Return:the first index of the value or -1 if value is not present
 * or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || *array == '\0')
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = %i\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
