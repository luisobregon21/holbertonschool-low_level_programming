#include "holberton.h"

/**
 * print_diagonal - function draws a diagonal line.
 * @n: represents number of times \ is printed.
 */

void print_diagonal(int n)
{
	int count;
	int space;

	for (count = 0; count < n; count++)
	{
		for (space = 0; space < count ; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
