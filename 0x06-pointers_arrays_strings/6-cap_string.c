#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @words: words of a string.
 *
 * Return: characters.
 */

char *cap_string(char *words)
{
	int index, index2;
	int flag = 1;
	char arr[] = {'\t', '\n', ' ', '.', ',',
		';', '!', '?', '"', '(', ')', '{', '}'};

	for (index = 0; words[index] != '\0'; index++)
	{
		if (flag == 1)
		{
			if ((words[index] > 96) && (words[index] < 123))
				words[index] = words[index] - 32;
			flag = 0;
		}

		for (index2 = 0; arr[index2] != '\0'; index2++)
		{
			if (words[index] == arr[index2])
				flag = 1;
		}
	}
	return (words);
}
