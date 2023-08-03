#include "main.h"

/**
 * print_binary - a function that converts and prints ints to binary
 * @n: the integer to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	int arr[64];

	if (n == 0)
		printf("0");

	while (n)
	{
		arr[i] = n & 1;
		n = n >> 1;
		i++;
	}

	while (i)
	{
		i--;
		printf("%u", arr[i]);
	}
}
