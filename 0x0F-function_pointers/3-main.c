#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main function of a program to perform
 * a given operation
 *
 * @ac: the number of arguments
 * @av: array pointer to the arguments
 *
 * Return: always 0
 */

int main(int ac, char *av[])
{
	if (ac < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*av[2] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(av[2], "%") || strcmp(av[2], "/")) && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", (get_op_func(av[2])(atoi(av[1]), atoi(av[3]))));
	return (0);
}
