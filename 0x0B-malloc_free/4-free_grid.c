#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated to a 2D array
 * that has already been created
 *
 * @grid: double pointer to 2D array
 * @height: height of the 2D array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int *g;
	int h;

	for (h = 0; h < height; h++)
	{
		g = grid[h];
		free(g);
	}
	free(grid);
}
