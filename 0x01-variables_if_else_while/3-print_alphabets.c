#include <stdio.h>
/**
 * main - function print all alphabet
 * Return: 0
*/
int main(void)
{
	int a = 97;
	int A = 65;

	while (a <= 122)
	{
		putchar(a);
			a++;
	}
	while (A <= 90)
	{
		putchar(A);
			A++;
	}
	putchar('\n');
	return (0);
}
