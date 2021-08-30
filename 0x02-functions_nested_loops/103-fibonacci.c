#include <stdio.h>
/**
 * main - prints the sum of even Fibonacci.
 * Return: 0 on success.
 */

int main(void)
{
	unsigned long int Fibonacci = 1, total = 0;
	unsigned long int num, a = 0, b = 0;

	for (num = 0; Fibonacci < 4000000; num++)
	{
		a = b;
		b = Fibonacci;
		Fibonacci = a + b;
		if ((Fibonacci % 2) == 0)
			total += Fibonacci;
	}
	printf("%ld\n", total);

	return (0);
}
