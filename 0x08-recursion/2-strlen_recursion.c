#include "holberton.h"
/**
 * _strlen_recursion - returns length of the string.
 *  @s: string.
 *
 *  Return: length of function.
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	s++;
	/**
	 * stores the return values (1 or 0) in
	 * the heap and recursevely adds them at the end
	 */
	return (1 + _strlen_recursion(s));
}
