#include "holberton.h"

/**
 * puts_half - prints second half of the string.
 * @str: variable for string.
 */

void puts_half(char *str)
{
	int index = 0, count, new;

	for (count = 0; str[count] != '\0'; count++)
	{
		index++;
	}
	index--;

	if (index % 2 != 0)
		new = (index - 1) / 2;
	else
		new = index / 2;

	for (count = new + 1; count <= index; count++)
		_putchar(str[count]);

	_putchar('\n');
}
