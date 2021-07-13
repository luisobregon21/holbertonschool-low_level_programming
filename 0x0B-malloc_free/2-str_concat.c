#include "holberton.h"
/**
 * *str_concat - concatenates (adds) 2 strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: the strings combined.
 */
char *str_concat(char *s1, char *s2)
{
	int idx, idx2, len, len2;
	int add = 0;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len = 0; s1[len] != '\0'; len++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	add = len + len2;

	new = malloc((add + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		new[idx] = s1[idx];
	}
	for (idx2 = 0; s2[idx2] != '\0'; idx2++)
	{
		new[idx] = s2[idx2];
		idx++;
	}
	new[idx] = '\0';
	return (new);
}
