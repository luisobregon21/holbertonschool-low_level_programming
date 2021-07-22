#include "3-calc.h"
/**
 * main - function perform simple operations.
 * @argc: count number of arguemnets passed.
 * @argv: what the arguements are.
 *
 * Return: the result of the operations.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (calc == / || calc == %)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", calc(num1, num2));
	return (0);
}
