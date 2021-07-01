#include "holberton.h"
/**
 * *_strncpy - copies a string.
 * @dest: destination parameter
 * @src: source parameter
 * @n: bytes parameter.
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	for ( ; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
