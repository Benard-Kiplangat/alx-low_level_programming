/*
 * File: 100-change.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]), coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (cents > 0)
	{
		if ((cents / 25) > 0)
		{
			coins += cents / 25;
			cents %= 25;
			continue;
		}
		if ((cents / 10) > 0)
		{
			coins += cents / 10;
			cents %= 10;
			continue;
		}
		if ((cents / 5) > 0)
		{
			coins += cents / 5;
			cents %= 5;
			continue;
		}
		if ((cents / 2) > 0)
		{
			coins += cents / 2;
			cents %= 2;
			continue;
		}
		coins += cents / 1;
	}

	printf("%d\n", coins);
	return (0);
}
