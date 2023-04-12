#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer
 * Description: a function that returns a pointer to ...
 * a 2 dimensional array of integers.
 * @width: the number of columns
 * @height: the number of rows
 * Return: pointers (success)
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (height < 1 || width < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
