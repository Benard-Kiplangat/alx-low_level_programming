/*
 * File: 3-islower.c
 * Auth: Benard Kiplangat
 */

#include "main.h"

/**
 * test_islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
