#include "holberton.h"

/**
 * print_numbers - function will print 0-9
 */

void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
