#include "holberton.h"
unsigned int _strlen(char *s);
/**
 * *string_nconcat - adds two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes.
 * Return: pointer to newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, idx;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length = _strlen(s1);

	if (n < _strlen(s2))
		length += n;
	else
		length += _strlen(s2);

	new = malloc(sizeof(char) * length + 1);
	if (new == NULL)
		return (NULL);

	for (length = 0; s1[length] != '\0'; length++)
		new[length] = s1[length];
	for (idx = 0; s2[idx] != '\0' && idx < n ; idx++)
	{
		new[length] = s2[idx];
		length++;
	}
	new[length] = '\0';
	length--;
	return (new);
}

/**
 * _strlen - finds lengths of string
 * @s: string
 * Return: 0
 */
unsigned int _strlen(char *s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
	;

	return (size);
}
