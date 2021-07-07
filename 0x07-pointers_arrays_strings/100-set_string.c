#include "holberton.h"

/**
 * set_string - sets value of pointer to a char.
 * @s: pointer of pointer.
 * @to: character pointer will be assigned to.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
