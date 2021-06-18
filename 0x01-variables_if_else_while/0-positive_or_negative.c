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
		printf("%d is positive", int n);
	}
	else if (n == 0)
	{
		printf("%n is zero", int n);
	}
	else if (n < 0)
	{
		printf("%d is negative", int n);
	}
	return (0);
}
