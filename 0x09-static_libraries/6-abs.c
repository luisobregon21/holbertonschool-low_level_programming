#include "holberton.h"
/**
 * _abs - function
 * @i: reprensents the interger.
 * Return: the interger in absolute value,
 */

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
