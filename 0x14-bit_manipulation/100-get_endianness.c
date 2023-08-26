#include "main.h"

/**
 * get_endianness - a function that determines the endianness of an OS
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)(&n) == 1);
}
