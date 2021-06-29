#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: variable for string.
 */

void puts2(char *str)
{
	for (; *str; str++)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
