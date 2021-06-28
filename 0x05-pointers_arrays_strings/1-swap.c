#include "holberton.h"
/**
 * swap_int - swaps the values of two int.
 * @a:variable has a value of 98.
 * @b:variable has a value of 42.
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
