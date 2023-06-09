#include <stdio.h>

/**
 * main - a function that uses argc and argv to print
 * the name of the program
 *
 * @argc: the number of commandline arguments
 * @argv: pointer to an array of commandline arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
