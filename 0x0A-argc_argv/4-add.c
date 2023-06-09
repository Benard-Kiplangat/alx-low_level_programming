#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that adds positive numbers
 * that are arguments from the command line
 *
 * @argc: the number of arguments
 * @argv: the pointer to array of string arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		if (atoi(argv[count]))
		{
		sum = sum + atoi(argv[count]);
		count++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
