#include "holberton.h"
/**
 * factorial - returns the factorial to a given number.
 * @n: number of factorial.
 *
 * Return: -1 to indicate an error, and 1 for factorial of 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
