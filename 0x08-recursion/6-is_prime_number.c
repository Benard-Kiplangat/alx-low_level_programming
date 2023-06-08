#include "main.h"

/**
 * is_prime_number - a function that returns 1 if input
 * integer is a prime number, otherwise return 0
 *
 * @n: the number to test
 *
 * Return: 1 if prime number or 0 if not
 */

int is_prime_number(int n)
{
	int count = 2;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
	{
		if (n % count == 0)
			return (0);
		count ++;
		return (is_prime_helper (n, count));
	}
}

/**
 * is_prime_helper - a function that finds if a number is
 * a prime number
 *
 * @n: the number
 * @count: the number to divide with
 *
 * Return: 0 if not a prime number or 1 if it is
 */

int is_prime_helper(int n, int count)
{
	if (n <= count)
		return (1);
	if (n % count == 0)
		return (0);
	else
		count ++;
	return (is_prime_helper(n, count));
}
