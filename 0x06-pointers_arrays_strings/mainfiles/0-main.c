#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("s1: %s\n", s1);
	printf("s2: %s", s2);
	ptr = _strcat(s1, s2);
	printf("s1: %s", s1);
	printf("s2: %s", s2);
	printf("ptr: %s", ptr);
	return (0);
}
