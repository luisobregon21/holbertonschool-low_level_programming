#include "holberton.h"
/**
 * print_last_digit - function
 * @l: represents the variable for the function.
 * Return: the last digits.
 */

int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
