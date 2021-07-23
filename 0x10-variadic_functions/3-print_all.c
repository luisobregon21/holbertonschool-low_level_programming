#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: is a list of all types of arguements passed.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str, *comma = "";
	int idx = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(list, format);

	while (format[idx] != '\0')
	{
		switch (format[idx])
		{
			case 'c':
				printf("%s%c", comma, va_arg(list, int));
				break;

			case 'i':
				printf("%s%i", comma, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", comma, va_arg(list, double));
				break;

			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", comma, str);
		}
		comma = ", ";
		idx++;
	}
	printf("\n");
	va_end(list);
}
