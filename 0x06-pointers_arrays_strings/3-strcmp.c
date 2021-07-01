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
	int index;

	for (index = 0; (s1[index] == s2[index]) && s1[index] != '\0'; index++)
	;
	return (s1[index] - s2[index]);
}
