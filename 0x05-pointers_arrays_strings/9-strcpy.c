#include "holberton.h"
/**
 * *_strcpy - function copies the string.
 * @dest: pointer that will return the value
 * @src: varible that points the string.
 * Return: the string.
 */

char *_strcpy(char *dest, char *src)
{
	int index, len = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		len++;
	}

	for (index = 0; index <= len; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
