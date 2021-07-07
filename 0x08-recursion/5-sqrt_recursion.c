#include "holberton.h"
/**
 * square_checker - checks if the number matches
 * the total when mult. by itself.
 * @num: number multiplied by itself.
 * @n: total of num when multiplied by itself.
 *
 * Return: the result.
*/
int square_checker(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num  * num > n)
	{
		return (-1);
	}
	else
	{
		return (square_checker(n, num + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a #.
 * @n: integer being squared.
 *
 * Return: -1 if no natural square root found. else return square root.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (square_checker(n, 1));
	}
	return (0);
}
