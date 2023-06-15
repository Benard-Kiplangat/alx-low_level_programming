#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * from a range, ordered from min to max
 *
 * @min: the lowest value of the range
 * @max: the highest value of the range
 *
 * Return: the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *arry;
	int i = 0;

	if (max < min)
		return (NULL);
	arry = malloc(sizeof(int) * ((max - min) + 1));
	if (arry == NULL)
		return (NULL);
	while (min <= max)
	{
		arry[i] = min;
		i++;
		min++;
	}
	return (arry);
}
