#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals.
 * @a: pointer.
 * @size: size of pointer.
 */

void print_diagsums(int *a, int size)
{
	int count, num1, num2;
	double square;

	square = (size * size);
	num1 = 0;
	num2 = 0;

	for (count = 0; count < square; count += (size + 1))
	{
		num1 += (a[count]);
	}

	for (count = size - 1; count < square; count += (size - 1))
	{
		num2 += (a[count]);
		square--;
	}

	printf("%i, %i\n", num1, num2);
}

