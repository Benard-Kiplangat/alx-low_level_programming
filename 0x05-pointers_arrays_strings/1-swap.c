#include "main.h"

/**
* swap_int - check the code 
* n: pointer to n
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
