#include "holberton.h"
/**
 * **alloc_grid - returns to aa 2 dimensional arr.
 * @width: x axis of the grid.
 * @height: y axis of the grid.
 *
 * Return: pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int idx, idx2;
	int count = 0;
	int **a;

	/*if width or height is 0 or negavive return (NULL) */

	if (width <= 0)
	{
		return (NULL);
	}
	if (width <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(height * sizeof(int *));

	if (a == 0)
	{
		free(a);
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		a[idx] = (int *)malloc(width * sizeof(int));

		if (a[idx] == 0)
		{
			for (; idx >= 0; idx--)
			{
				free(a[idx]);
			}
			free(a);
			return (NULL);
		}
	}
	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
		{
			a[idx][idx2] = count;
		}
	}
	return (a);
}
