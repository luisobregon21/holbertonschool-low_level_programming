#include "holberton.h"
/**
 * *_realloc - reallocates a memory of block, using malloc/free.
 * @ptr: pointer allocated with malloc(old size)
 * @old_size: bytes of alloced space in ptr.
 * @new_size: new size of new memory block.
 * Return: new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size,
unsigned int new_size)
{
	void *nptr;
	unsigned int total;

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		nptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	total = new_size + old_size;
	nptr = malloc(total);

	if (nptr == NULL)
		return (NULL);

	free(nptr);
	return (nptr);
}
