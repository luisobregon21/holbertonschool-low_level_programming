#include "holberton.h"
/**
 * _isalpha - function
 * @c: the parameter given is c.
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
