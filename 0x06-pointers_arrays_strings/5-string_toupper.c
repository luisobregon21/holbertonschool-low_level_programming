#include "holberton.h"

/**
 * *string_toupper - changes lowercase letters to uppercase.
 * @cases :pointer
 *
 * Return: uppercases.
 */

char *string_toupper(char *cases)
{
	int index;

	for (index = 0; cases[index] != '\0'; index++)
	{
		if ((cases[index] > 96) && (cases[index] < 123))
			cases[index] = cases[index] - 32;
	}
	return (cases);
}
