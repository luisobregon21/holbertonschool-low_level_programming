#include <stdio.h>
#include <unistd.h>

/**
 * main - function writes and formats the output to a stream.
 * holds the message but not on stdout console.
 * Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
