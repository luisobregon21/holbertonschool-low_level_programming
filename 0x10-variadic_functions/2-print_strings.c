#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @separator: string printed between the string
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *string;
	va_list list;

	va_start(list, n);
	for (idx = 0; idx < n; idx++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);

		if (separator != NULL && idx < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
