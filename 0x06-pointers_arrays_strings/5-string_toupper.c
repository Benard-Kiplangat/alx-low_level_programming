#include "main.h"

/**
 * string_toupper - a function to change all the lowercase string characters to uppercase
 * @n: pointer
 *
 * Return: the uppercased string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		/** uppercase letter are lower in the
		 * ascii table by 32, so we will subtract
		 * all lower case letters by the number
		 */
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
