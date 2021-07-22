#include "holberton.h"
/**
 * _strspn - gets length of prefix subscript.
 * @s: string.
 * @accept: bytes that will go into s.
 *
 * Return: initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, index2;

	for (index = 0; s[index] != '\0'; index++)
	{
	/* check for the matching index */
		for (index2 = 0; accept[index2] != s[index]; index2++)
		{
			/* if its null byte then return */
			if (accept[index2] == '\0')
				return (index);
		}
	}
return (index);
}
