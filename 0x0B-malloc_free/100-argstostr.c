#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the
 * arguments of your program
 *
 * @ac: the number of arguments passed to the program
 * @av: a pointer to the arguments passed to the program
 *
 * Return: a pointer to the new string or NULL
 */

char *argstostr(int ac, char **av)
{
	if (ac > 0 && av != NULL)
	{
		char *nwstr;

		if (ac > 0)
		{
			int i = 0;
			int k = 0;
			int ni = 0;
			int j = 0;

			while (k < ac)
			{
				if (av[k] != NULL)
				{
		/*finding the number of characters in the first string */
					for (;av[k][ni] != '\0'; i++)
						ni++;
				}
				else
					i = i + 0;
				k++;
				ni = 0;
			}
			k = 0;
			nwstr = (char *)malloc(sizeof(char) * (i + 1 + ac));

			if (nwstr == NULL)
				return (NULL);
			while (j < (i + ac))
			{
				while (k < ac)
				{
					if (av[k] != NULL)
					{
						for (;av[k][ni] != '\0'; ni++)
						{
							nwstr[j] = av[k][ni];
							j++;
						}
						ni = 0;
						nwstr[j] = '\n';
						j++;
					}
					else
					{
						nwstr[j] = '\n';
						j++;
					}
					k++;
				}
			nwstr[i + 1 + ac] = '\0';
			}
			return (nwstr);
		}
	}
	return (NULL);
}
