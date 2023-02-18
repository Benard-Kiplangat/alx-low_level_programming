/*
 * File: 4-print_alphabt.c
 * Auth: Benard Kiplangat
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' || 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
