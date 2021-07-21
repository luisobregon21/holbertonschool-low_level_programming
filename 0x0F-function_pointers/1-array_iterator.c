#include "function_pointers.h"
/**
 * array_iterator - executes on each element of array.
 * @array: array of int.
 * @size: size of the array given.
 * @action: pointer to function we using.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int idx;

	if(array == NULL || action == NULL)
		return;

	for(idx = 0; idx  < size; idx++)
		action(array[idx]);
}
