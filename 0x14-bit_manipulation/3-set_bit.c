#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 *
 * @n: the value to set at index to replace in the number
 * @index: the index of the bit to set
 *
 * Return: 1 if it works or -1 if on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	num = 1;
	num = num << index;
	*n = ((*n) | num);
	return (1);
}
