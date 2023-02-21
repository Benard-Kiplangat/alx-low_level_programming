void print_alphabet(void);
/*
 * File: 1-alphabet.c
 * Auth: Benard Kiplangat
 */

#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 * @c: first parameter - an input character for _putchar function.
 * Return: Always 0.
 */

/*parameter c is an input character for _putchar function.*/
int _putchar(char c);

int main(void)
{
	for (char i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
return (0);
}
