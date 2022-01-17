#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t idx = 0;
	size_t right = size - 1;
	size_t middle = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= (right - 1); idx++)
		{
			printf("%d, ", array[idx]);
		}
		printf("%d\n", array[right]);

		middle = ((left + right) / 2);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
