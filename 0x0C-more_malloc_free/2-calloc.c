#include "holberton.h"
/**
 * *_calloc - allocates memory for an array.
 * @nmemb: inside of the array.
 * @size: similar to sizeof for the type.
 * Return: number.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int num, bytes;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	bytes = nmemb * size;

	arr = malloc(bytes);
	if (arr == NULL)
		return (NULL);

	for (num = 0; num < bytes; num++)
	{
		arr[num] = 0;
	}

	return (arr);
}
