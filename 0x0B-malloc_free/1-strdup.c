#include "holberton.h"

/**
 * *_strdup - returns a pointer to newly allocated
 * space in memory that copies string given as a parameter.
 * @str: points to the strings.
 *
 * Return: characters.
 */

char *_strdup(char *str)
{
	int idx, idx2;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	for (idx = 0; str[idx] != '\0'; idx++)
	;

	new = malloc((idx + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (idx2 = 0; idx2 < idx; idx2++)
	{
		new[idx2] = str[idx2];
	}
	return (new);
}
