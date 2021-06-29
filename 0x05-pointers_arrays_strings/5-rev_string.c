#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int length, start;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	for (start = 0, length--; start <= length; start ++, length--)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
	}
}
