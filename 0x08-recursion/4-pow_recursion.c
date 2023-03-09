#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: the number
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
int i = 1;

if ((i * i) > n)
	return (-1);

if ((i * i) == n)
	return (i);
i++;

_sqrt_recursion(n);
}
