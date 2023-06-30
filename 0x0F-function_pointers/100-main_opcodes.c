#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints opcodes
 * @argc: the number of argument
 * @argv: a pointer to the array of arguments passed
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
char *opcodes = (char *)main;
int i = 0, bytes;

if (argc != 2)
{
	printf(Error\n");
	exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
	printf("Error\n");
	exit(2);
}

while (i < bytes)
{
	printf("%02x", opcodes[i] & 0xFF);
	if (i != bytes - 1)
		printf(" ");
	i++;
}

printf("\n");
return (0);
}
