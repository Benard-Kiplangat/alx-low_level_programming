#include <stdio.h>

/**
 * main - a program that prints all arguments it recieves
 *
 * @argc: the number of arguments recieved
 * @argv: pointer to an array of strings containing all arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
