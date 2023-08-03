#include "main.h"

/**
 * get_bit: a function that returns a value of a given index
 *
 * @n: the the number to check the value
 * @index: the index
 *
 * Return: value at given index or -1 if an error occours
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
