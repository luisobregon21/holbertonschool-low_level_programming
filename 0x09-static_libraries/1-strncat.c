#include "holberton.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes.
 *
 * Return: pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, index2;

	/*Loop gets the lenght of the string *dest */
	for (index = 0; dest[index] != '\0'; index++)
	;

	/*Loop copies over the src string, int the *dest */
	for (index2 = 0; (src[index2] != '\0') && (index2 < n); index2++)
	{
		dest[index] = src[index2];
		index++;
	}

	/*Add null characters at the end of the string if condition is met*/
	if (index2 < n)
	{
		src[index2] = '\0';
	}

	return (dest);
}
