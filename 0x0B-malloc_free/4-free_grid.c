#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid of alloc_grid
 *
 * @grid: 2d array
 * @height: height of 2d array
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
