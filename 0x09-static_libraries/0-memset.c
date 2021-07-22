#include "holberton.h"
/**
 * *_memset - fills first n bytes of memory pointed by s
 * with constant b.
 * @s: string
 * @b: consant
 * @n: number of bytes change in s
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
