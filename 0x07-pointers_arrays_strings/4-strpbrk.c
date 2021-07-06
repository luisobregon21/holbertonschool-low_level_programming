#include "holberton.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes that are matched by s.
 *
 * Return: pointer to s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index, index2;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index] == accept[index2])
			{
				return (&s[index]);
			}
		}
	}
	return (NULL);
}
