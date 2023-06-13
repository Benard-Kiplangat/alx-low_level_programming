#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to two dimensional array or NULL
 */

int **alloc_grid(int width, int height)
{
	if (height > 0 &&  width > 0)
	{
		int i = 0;
		int **grid = malloc(height * sizeof(int *));

		if (grid == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				while (i)
				{
					free(grid[i - 1]);
					i--;
				}
				free(grid);
				return (NULL);
			}
		}

		return (grid);
	}
	return (NULL);
}
