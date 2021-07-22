#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters.
 * @n: a constant positive number.
 * Return: sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (num = 0; num < n; num++)
		sum += va_arg(list, unsigned int);

	va_end(list);
	return (sum);
}
