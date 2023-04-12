#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid.
 * Description: a function that frees a 2 dimensional grid previously created
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int g;

	if (grid == NULL || height <= 0)
		return;
	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
