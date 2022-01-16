#include "main.h"
int _strlen(int ac, char **av)
{
	int idx, idx2, count = 0;

	for (idx = 1; idx < ac; idx++)
	{
		for(idx2 = 0; av[idx][idx2] != '\0'; idx2++)
		{
			count++;
		}
		count++;
	}
	return count;
}

/**
 * argstostr - turns 2d array to a string
 * @ac: arguement count
 * @av: 2d array
 * Return: a string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int idx, idx2, idx3 = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = _strlen(ac, av);
	str = malloc(size);
	if (str == NULL)
		return (NULL);

	for (idx = 1; idx < ac; idx++)
	{
		for (idx2 = 0; av[idx][idx2] != '\0'; idx2++)
		{
			str[idx3] = av[idx][idx2];
			idx3++;
		}
		str[idx3] = '\n';
		idx3++;
	}
	str[idx3] = '\0';
	return (str);
}
