#ifndef FILE_MACRO
#define FILE_MACRO
#include <stdio.h>
#define FILE __FILE__
#endif

/**
 * main - a program that print the name of file it was compiled
 * from
 *
 * Return: always 0
 */

int main(void)
{
	char *filename = FILE;

	printf("%s\n", filename);
	return (0);
}
