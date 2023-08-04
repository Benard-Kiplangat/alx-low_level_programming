#include "main.h"

/**
 * print_binary - a function that converts and prints ints to binary
 * @n: the integer to convert
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{

	unsigned long int num = n;
	unsigned long int mask = 1;
	int len = 0;

	while (num > 0)
	{
		len++;
		num >>= 1;
	}

	len -= 1;

	if (len > 0)
		mask = mask << len;

	while (mask > 0)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");

		mask >>= 1;
	}
}
