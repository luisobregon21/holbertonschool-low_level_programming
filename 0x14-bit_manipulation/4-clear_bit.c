#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: points to the decimal being passed.
 * @index: where bit will be placed.
 * Return: 1 if function works, -1 if fails.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	bit <<= index;
	bit = ~bit;
	*n = *n & bit;

	return (1);
}
