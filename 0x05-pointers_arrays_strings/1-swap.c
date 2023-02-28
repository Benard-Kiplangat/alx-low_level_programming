#include "main.h"

/**
 * swap_int - check the code 
 * n: pointer to n
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
