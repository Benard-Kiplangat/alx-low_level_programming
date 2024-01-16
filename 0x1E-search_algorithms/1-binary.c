#include "search_algos.h"
#include <math.h>

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using binary search algorithm
 *
 * @array: the pointer to the first element of the array to search in
 * @size: the number of the array's elements
 * @value: the value to search for
 *
 * Return: the index of the element or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t L = 0;
	size_t M;
	size_t R = size - 1;

	while (L <= R)
	{
		printf("Searching in array: ");

		for (i = L; i <= R; i++)
		{
			printf("%i", array[i]);
			if (i != R)
				printf(", ");
			else
				printf("\n");
		}

		M = floor((L + R) / 2);
		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			R = M - 1;
		else
			return (M);
	}

	return (-1);
}
