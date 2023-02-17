#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Sizes of types in C'
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
long int li;
long long int lli;
double d;
char c;
float f;

printf("Size of an char: %lu.\n", sizeof(c));
printf("Size of an int: %lu.\n", sizeof(i));
printf("Size of an long int: %lu.\n", sizeof(li));
printf("Size of a long long int: %lu.\n", sizeof(lli));
printf("Size of a float: %lu.\n", sizeof(f));

return (0);
}
