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
char *opcod = (char *)main;
int i = 0, kbytes;

if (argc != 2)
{
	printf(Error\n");
	exit(1);
}

kbytes = atoi(argv[1]);

if (kbytes < 0)
{
	printf("Error\n");
	exit(2);
}

while (i < kbytes)
{
	printf("%02x", opcod[i] & 0xFF);
	if (i != kbytes - 1)
		printf(" ");
	i++;
}

printf("\n");
return (0);
}
