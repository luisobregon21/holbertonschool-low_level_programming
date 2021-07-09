#include <stdio.h>
/**
 * main - prints all arguements it recieves.
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: arguement it recieves.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
