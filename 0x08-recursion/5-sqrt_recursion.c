#include "main.h"

int sqrt_recursion_with_i(int n, int i);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: the number
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);

return (sqrt_recursion_with_i(n, 0));
}

/**
 * sqrt_recursion_with_i - a function that recurses to find the nutural number
 * @n: the number
 * @i: the iterator
 * Return: Square root of n
 */

int sqrt_recursion_with_i(int n, int i)
{
if ((i * i) > n)
	return (-1);

if ((i * i) == n)
	return (i);

return (sqrt_recursion_with_i(n, i + 1));
}
