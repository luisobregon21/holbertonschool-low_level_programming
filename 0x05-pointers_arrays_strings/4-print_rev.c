#include "holberton.h"

/**
 * print_rev - prints strings in reverse.
 * @s: string
 */

void print_rev(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		idx++;
	}
/*Now that we know the length, we know where to start and end */
	for (idx = idx - 1; idx >= 0 ; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
