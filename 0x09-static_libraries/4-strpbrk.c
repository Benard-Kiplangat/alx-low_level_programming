#include "main.h"

/**
 * _strpbrk - a function that matches any character specified
 * @s: the C string to be scanned
 * @accept: character in str1 matching one of the characters in str2
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);
}
