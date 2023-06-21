#include "function_pointers.h"

/**
 * array_iterator - a funtion that executes a function given
 * an element of an array
 *
 * @array: the array
 * @size: the size
 * @action: the function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
