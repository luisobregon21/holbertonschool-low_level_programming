#include "main.h"
/**
 * print_times_table - prints the n times table.
 * @n: is the table we want to print.
 */

void print_times_table(int n)
{
	int num = 0, num2, product, new_product;

	if (n > 15 || n < 0)
		return;

	for (num = 0 ; num <= n; num++)
	{
		_putchar('0');
		for (num2 = 1; num2 <= n; num2++)
		{
			_putchar(',');
			_putchar(' ');
			product = num * num2;
			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				new_product = (product / 10);
				_putchar((new_product % 10) + '0');
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
