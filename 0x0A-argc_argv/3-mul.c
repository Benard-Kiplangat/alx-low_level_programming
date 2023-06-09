#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two commandline arguments
 *
 * @argc: the number of arguments
 * @argv: a pointer to string arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
