#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program to determine the lowest number of coins
 * to return based on the given ammount
 *
 * @argc: the number of arguments passed. Should be only two.
 * @argv: pointer to an array of strings containing the ammount
 *
 * Return: 1 on error or 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int ammount;
	int argcount = argc;
	int coins = 0;
	int coinvalues[] = {25, 10, 5, 2, 1};

	if (argcount == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		do {
			coins += atoi(argv[1]) / coinvalues[i];
			ammount = atoi(argv[1]) % coinvalues[i];
			i++;
		}
		while (ammount != 0);
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
