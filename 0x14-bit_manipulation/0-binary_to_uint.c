#include "main.h"
/**
 * binary_to_uint - converts binary number to uint.
 * @b: points to a string of 0 and 1.
 * Return: converted unsigned int, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int idx;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '0' || b[idx] == '1')
		{
/* shifts the number by 1*/
			uint <<= 1;
/* subtract the 0 to convert it*/
			uint += b[idx] - '0';
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}
