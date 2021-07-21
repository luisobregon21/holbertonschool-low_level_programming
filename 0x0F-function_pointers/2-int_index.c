#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: number of elements in the given array.
 * @cmp: function compares values.
 * Return: index for when cmp gets a match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (idx = 0; idx < size; idx++)
		if (cmp(array[idx]) == 1)
			return (idx);
	return (-1);
}
