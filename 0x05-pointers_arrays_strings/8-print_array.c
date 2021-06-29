#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: variable
 * @n: variable
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
	}
	printf("\n");
}
