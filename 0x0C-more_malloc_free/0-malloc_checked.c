#include "holberton.h"
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: usigned int
 *
 * Return: a pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == 0)
	{
		exit(98);
	}
	return (arr);
}
