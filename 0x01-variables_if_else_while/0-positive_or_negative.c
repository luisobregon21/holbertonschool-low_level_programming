#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", int n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", int n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", int n);
	}
	return (0);
}
