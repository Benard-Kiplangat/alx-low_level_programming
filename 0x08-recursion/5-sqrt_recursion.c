#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a given number
 *
 * @n: the number to find its square root
 *
 * Return: the square root or -1 if it doesn't have
 */

int _sqrt_recursion(int n)
{
	int upper = n;
	int lower = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (helper(n, lower, upper));
}

/**
 * helper - a function that helps _sqrt_recursion to calculate the square root
 *
 * @n: the number to find its square root
 * @lower: the number sure to be lower than the sqrt of n
 * @upper: the number sure to be higher than the sqrt of n
 *
 * Return: the natural square root of n or -1
 */

int helper(int n, int lower, int upper)
{
	int middle; /* a number to divide upper and lower for more precision */

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	middle = (upper + lower) / 2; /* finding the middle */
	if (middle * middle == n)
	/* cheking if the number btwn is the sqrt of n */
		return (middle);
	if (upper - lower <= 1)
	/* breaking the recursion if the sqrt of n become a float */
		return (-1);
	if (middle * middle < n)
		lower = middle;
	/* if the square of middle is less than n, change lower */
	else
		upper = middle;
	/* else assign it to upper */
	return (helper(n, lower, upper));
}
