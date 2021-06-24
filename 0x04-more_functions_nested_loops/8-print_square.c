#include "holberton.h"

/**
 * print_square - function prints a square
 * @size: variable is size of square
 */

void print_square(int size)
{
	int square;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (square = 0; square < size; square++)
	{
		for (count = 2; count <= size; count++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
