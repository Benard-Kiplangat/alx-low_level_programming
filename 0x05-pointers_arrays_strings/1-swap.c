#include "main.h"

/**
 * swap_int - swaps two values from the parameters
 * @a: pointer to a
 * @b: pointer to b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
