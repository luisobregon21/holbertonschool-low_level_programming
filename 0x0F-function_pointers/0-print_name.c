#include "function_pointers.h"
/**
 * print_name - prints a name;
 * @name: string of the name given.
 * @f: pointer to a function that has a string.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
