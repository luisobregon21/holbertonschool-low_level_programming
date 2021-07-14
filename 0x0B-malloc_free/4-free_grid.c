#include "holberton.h"
/**
 * free_grid - frees a 2d malloc created grid.
 * @grid: 2d array.
 * @height: height of the array.
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}
	free(grid);
}
