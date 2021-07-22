#include "holberton.h"
#include <stddef.h>

/**
 * *_strstr - finds first occurance of the substring in string.
 * @haystack: string.
 * @needle: substring.
 *
 * Return: pointer to beginning of located substring. otherwise NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index, index2;
	int length = 0;

	while (needle[length] != '\0')
	{
		length++;
	}

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (index2 = 0; needle[index2] != '\0'; index2++)
		{
			if (haystack[index + index2] != needle[index2])
			{
				break;
			}
		}
		if (index2 == length)
		{
			return (&(haystack[index]));
		}
	}
	return (NULL);
}
