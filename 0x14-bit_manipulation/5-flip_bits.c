#include "main.h"

/**
 * flip_bits - a function that flip bits to convrt one number to another number
 *
 * @n: the first number
 * @m: the second number to convert to
 *
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff = diff & (diff - 1);
	}
	return (counter);
}
