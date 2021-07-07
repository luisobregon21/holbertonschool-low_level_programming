#include "holberton.h"
/**
 * print_chessboard - prints a chestboard.
 * @a: array of char.
*/

void print_chessboard(char (*a)[8])
{
	int index, index2;

	for (index = 0; index < 8; index++)
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			_putchar(a[index][index2]);
		}
		_putchar('\n');
	}
}
