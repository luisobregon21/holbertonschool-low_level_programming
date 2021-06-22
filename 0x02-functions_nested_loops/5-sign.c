#include "holberton.h"
/**
 * print_sign - function will print (-/+).
 * @n: n is the variable being used.
 * Return: 1 if n is postive, 0 if 0 and -1 if it's negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
