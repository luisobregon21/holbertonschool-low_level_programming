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

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of int: %zu bytes\n", sizeof(floatType));
	printf("Size of int: %zu bytes\n", sizeof(doubleType));
	printf("Size of int: %zu bytes\n", sizeof(charType));
	return (0);
}
