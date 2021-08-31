#include "main.h"

/**
 * print_number - prints an integer.
 * @n: variable for integer.
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
