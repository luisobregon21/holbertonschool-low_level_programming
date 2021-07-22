#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of int.
 * @a: an array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	/* last elemenet of the array */
	int len = n - 1;
	int index;
	/* temporary varianle */
	int tmp = 0;

	for (index = 0; index < len; index++)
	{
		/* start at the first element of the array */
		tmp = a[index];
		/* index is now the last element of the array */
		a[index] = a[len];
		/* len is now the first value of the array aka 0. */
		a[len] = tmp;
		/* value is decreasing*/
		len--;
	}
}
