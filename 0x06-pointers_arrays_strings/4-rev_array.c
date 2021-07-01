#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of int.
 * @a: an array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int len = n - 1;
	int index;
	int tmp = 0;

	for (index = 0; index < len; index++)
	{
		tmp = a[index];
		a[index] = a[len];
		a[len] = tmp;
		len--;
	}
}
