#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - concatenates(links), two strings.
 * @dest: destination variable.
 * @src: source variable.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index, index2;

	for (index = 0; dest[index] != '\0'; index++)
	;

	for (index2 = 0; src[index2] != '\0'; index2++)
	{
		dest[index] = src[index2];
		index++;
	}
	return (dest);
}
