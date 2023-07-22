#include "main.h"

/**
 * binary_to_uint - a function that converts binary to unsigned int
 *
 * @b: the string containing the binary number
 *
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	len = len - 1;

	for (power = 1; len >= 0; power *= 2)
	{
		if (b[len] == '1')
			num = num + power;
		len--;
	}
	return (num);
}
