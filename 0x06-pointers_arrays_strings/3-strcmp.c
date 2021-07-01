#include "holberton.h"
/**
 * _strcmp - compares two string.
 * @s1: string.
 * @s2: string2.
 *
 * Return: 0, negative or positive value
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2)
		return (*s1 - *s2);
	else if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
	return (0);
}
