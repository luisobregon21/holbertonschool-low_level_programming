#include "holberton.h"
/**
 * *leet - encodes string into 1337
 * @arr: array of characters
 *
 * Return: 1337.
 */

char *leet(char *arr)
{
	int index, index2;

	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (index = 0; arr[index] != '\0'; index++)
	{
		for (index2 = 0; let[index2] != '\0'; index2++)
		{
			if (let[index2] == arr[index])
			{
				arr[index] = num[index2];
			}
		}
	}
	return (arr);
}
