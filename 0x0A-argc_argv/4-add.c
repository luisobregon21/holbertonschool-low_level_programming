#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: count
 * @argv: array of strings
 *
 * Return: sum of positive numbers.
 */

int main(int argc, char *argv[])
{
	int index, index2, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		for (index2 = 0; argv[index][index2] != '\0'; index2++)
		{
			if (argv[index][index2] < '0' || argv[index][index2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);

	return (0);
}
