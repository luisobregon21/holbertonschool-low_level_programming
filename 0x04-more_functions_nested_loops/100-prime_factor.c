#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 * Return: 0 on success.
 */

int main(void)
{
	long unsigned int num = 612852475143;
	long int div = 2, fact;

	while (num != 0)
	{
		if (num % div !=0)
			div += 1;
		else
		{
			fact = num;
			num = num / div;
			if (num == 1)
			{
				printf("%lu\n", fact);
				return (0);
			}
		}
	}

	return (0);
}
