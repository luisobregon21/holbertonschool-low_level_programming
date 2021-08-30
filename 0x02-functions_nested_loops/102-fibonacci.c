#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers.
 * Return: 0 on success.
 */

int main(void)
{
	int Fibonacci = 1;
	int num, a = 0, b = 0;

	for (num = 0; num < 50; num++)
	{
		a = b;
		b = Fibonacci;
		Fibonacci = a + b;
		printf("%d, ", Fibonacci);
	}
	a = b;
	b = Fibonacci;
	Fibonacci = a + b;
	printf("%d\n", Fibonacci);

	return (0);
}
