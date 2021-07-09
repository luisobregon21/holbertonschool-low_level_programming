#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguement count.
 * @argv: one dimensional array of strings.
 *
 * Return: the result of the multiplication.
 */

int main(int argc, char *argv[])
{
	int first, second, total;

	if (argc > 2)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		total = first * second;
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
