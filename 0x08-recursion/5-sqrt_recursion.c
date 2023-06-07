#include "main.h"

int helper(int n, int j, int i)
{
	if (i < 0)
	{
		j = -1;
		return j;
	}
	if (i == 0)
		return (0);
	else
	{
		j++;
		i = i + 2;
		return (j + helper(n - i, j, i));	
	}
}

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
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		int i = 1;
		int j = 1;
		j = j + helper(n, j, i);
		return (j);
	}
}
