#include <stdio.h>
/**
 * *_memcpy - copies memory of area.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes from memory area.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
