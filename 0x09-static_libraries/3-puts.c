#include "holberton.h"
/**
 * _puts - prints a string to stdout
 * @str: variable for string
 */

void _puts(char *str)
{
	for (; *str = '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
