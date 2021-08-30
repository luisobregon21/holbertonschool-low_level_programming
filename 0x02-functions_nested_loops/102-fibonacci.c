#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers.
 * Return: 0 on success.
 */

int main(void)
{
	unsigned long int Fibonacci = 1;
	unsigned long int num, a = 0, b = 0;

	for (num = 0; num < 50; num++)
	{
		a = b;
		b = Fibonacci;
		Fibonacci = a + b;
		printf("%ld, ", Fibonacci);
	}
	Fibonacci = a + b;
	printf("%ld\n", Fibonacci);

	return (0);
}
