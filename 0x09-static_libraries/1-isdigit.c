#include "holberton.h"

/**
 * _isdigit - function
 * @c: is the variable being used
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
