#include "function_pointers.h"

/**
 * array_iterator - a function that prints each array element
 * @array: the array
 * @size: number of elements to print
 * @action: the pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
