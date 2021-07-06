#include "holberton.h"
#include <stddef.h>

/**
 * *_strchr - locates character in string.
 * @s: string
 * @c: character.
 *
 * Return: pointer to first occurance of character.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
