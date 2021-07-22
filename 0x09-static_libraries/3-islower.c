#include "holberton.h"
/**
 * _islower - function
 * @c: is the parameter
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
