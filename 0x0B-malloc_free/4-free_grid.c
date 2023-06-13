#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a program that frees a 2D grid previously
 * created by alloc_grid
 *
 * @grid: the pointer to the 2D array
 * @height: the height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
