#include <stdio.h>
/**
 * main - computes and prints sum of all three multiples.
 * Return: 0 if succeed.
 */
int main(void)
{
	unsigned long int sum = 0;
	unsigned long int num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
