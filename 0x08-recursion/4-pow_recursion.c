#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the y power.
 * @x: is the base.
 * @y: is the power is raised by.
 *
 * Return:-1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		/**
		 * multiply the base by itself
		 * decrement y, so that that the function can end.
		*/
		return (x * _pow_recursion(x, y - 1));
	}
}
