#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimun number of coins.
 * to make change for an amount of money$$.
 * @argc: count
 * @argv: array of strings
 *
 * Return: money.
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int riches;
	int count = 0, index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	riches = atoi(argv[1]);

	if (riches < 0)
	{
		printf("0\n");
		return (0);
	}

	while (riches != 0)
	{
		if (riches >= cents[index])
		{
			riches -= cents[index];
			count++;
		}
		else
		{
			index++;
			continue;
		}
	}
	printf("%d\n", count);
	return (0);
}
