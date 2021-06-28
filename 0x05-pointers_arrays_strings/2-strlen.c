#include "holberton.h"
/**
 * _strlen - calculate length of a string.
 * @s: string
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
