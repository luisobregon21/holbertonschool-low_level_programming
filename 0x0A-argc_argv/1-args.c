#include <stdio.h>
/**
 * main - prints number of arguements passed into it.
 * @argc: argument count
 * @argv: arguement vector.
 *
 * Return: print number followed by new line.
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
