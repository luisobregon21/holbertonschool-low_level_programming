#include "holberton.h"

/**
 * puts_half - prints second half of the string.
 * @str: variable for string.
 */

void puts_half(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		continue;
	}

	if (index % 2 != 0)
		index = (index - 1) / 2;
	else
		index = index / 2;

	for (; str[index] != '\0'; index++)
		_putchar(str[index]);

	_putchar('\n');
}
