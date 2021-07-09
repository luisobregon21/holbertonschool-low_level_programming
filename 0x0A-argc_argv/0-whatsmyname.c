#include <stdio.h>
/**
 * main - prints its name.
 * __attribute__((unused)) - is like void and lets your function
 *  know that the variable declare is never referenced.
 * @argc: will not be referenced, but counts # of arguements passed.
 * @argv: one dimensional array that holds strings values.
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
