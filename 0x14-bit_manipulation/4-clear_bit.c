#include "main.h"

/**
 * clear_bit - a function to set the value of a bit to 0 at a given index
 *
 * @n: the number to clear its bit
 *
 * Return: 1 if it works or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
