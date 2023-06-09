#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 *
 * @argc: the number of arguments passed to it including its name
 * @argv: pointer to array of strings containing all arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
