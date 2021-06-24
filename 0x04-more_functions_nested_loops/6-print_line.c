#include "holberton.h"

/**
 * print_line - function draws straight line
 * @n: number of times _ will be printed
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
