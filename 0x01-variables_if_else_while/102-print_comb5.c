#include <stdio.h>
/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int firstComb, secondComb;

	for (firstComb = 0; firstComb <= 99; firstComb++)
	{
		for (secondComb = 0; secondComb <= 99; secondComb++)
		{
			if ((firstComb != secondComb) && (firstComb < secondComb))
			{
				putchar(firstComb / 10 + '0');
				putchar(firstComb % 10 + '0');
				putchar(' ');
				putchar(secondComb / 10 + '0');
				putchar(secondComb % 10 + '0');
				if (!(firstComb == 98 && secondComb == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
