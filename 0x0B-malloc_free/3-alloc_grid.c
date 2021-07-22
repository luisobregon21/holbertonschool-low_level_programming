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
	/**
	 * idx will count through the height (rows)
	 * idx2 will count through the width (columns)
	 * count will help print the content of a[idx][idx2]
	 */
	int idx, idx2, count = 0;
	/**
	 * 2d arr holds the content of the pointer
	 */
	int **a;
	/* if width and height less than or equal to 0 return NULL*/
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	/*
	 * allocate memory for the height (rows)
	 * int (*) = bytes it takes to make pointer
	 */
	a = (int **)malloc(height * sizeof(int *));

	/*if the array is 0 return NULL and free the memory spaced allocated*/
	if (a == 0)
	{
		free(a);
		return (NULL);
	}
	/*while idx value < height go in loop */
	for (idx = 0; idx < height; idx++)
	{
		/*allocate the memory for the width (columns)*/
		a[idx] = (int *)malloc(width * sizeof(int));
		if (a[idx] == 0)
		{
			for (; idx >= 0; idx--)
			{
				/* free each row */
				free(a[idx]);
			}
			/* free evrything */
			free(a);
			return (NULL);
		}
	}
	/* goes through every point */
	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
		{
			a[idx][idx2] = count;
		}
	}
	return (a);
}
