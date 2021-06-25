#include "holberton.h"
#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
