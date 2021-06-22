#include "holberton.h"
/**
 * print_alphabet_x10 - function
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char c;

	for (b = 0; b < 10; b++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
