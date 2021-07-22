#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: variable for integer.
 */

void print_number(int n)
{
	if ( n / 10)
	{
	print_number(n / 10);
	}
}
