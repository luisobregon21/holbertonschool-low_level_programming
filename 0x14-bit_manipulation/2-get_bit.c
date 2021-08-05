#include "main.h"
/**
 * get_bit - returns value of bit at given index.
 * @index: place where bit will be placed.
 * @n: value of bit.
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	int bit;

	if (index > sizeof(n) * 8)
		return (-1);

	while (count < index)
	{
		n = n >> 1;
		count++;
	}
	bit = n & 1;

	return (bit);
}
