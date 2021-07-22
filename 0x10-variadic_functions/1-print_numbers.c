#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/**
	 * turn arguements into a list homie
	 */

	unsigned int idx;
	va_list list;

	va_start(list, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%i", va_arg(list, unsigned int));
		if (separator != NULL && idx != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
