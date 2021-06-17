#include <stdio.h>

/**
 * main - function
 * sizeof evaluate the size of a variable
 * Return: 0
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of int: %zu byte(s)\n", sizeof(floatType));
	printf("Size of int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of int: %zu byte(s)\n", sizeof(charType));
	return (0);
}
