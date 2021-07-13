#include "holberton.h"
/**
 * *create_array - creates an array of chars.
 * @size: size of array.
 * @c: character that goes in the array.
 *
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		str[index] = c;
		index++;
	}
	return (str);
}
