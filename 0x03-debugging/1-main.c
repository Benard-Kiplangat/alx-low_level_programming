#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
	putchar(i);
	/*Infinite loop because there is no increment, so i will always be less than 10*/
	}

	printf("Infinite loop avoided! \\o/\n");

       	return (0);
}
