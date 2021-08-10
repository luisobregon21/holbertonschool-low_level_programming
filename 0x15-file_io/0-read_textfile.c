#include "main.h"
/**
 * read_textfile -  reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* total is the total number of letters it could read/print */
	int file, total;
	char *temp;

	temp = malloc(sizeof(char) * letters);
	if (temp  == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	total = read(file, temp, letters);
	write(STDOUT_FILENO, temp, total);

	free(temp);
	close(file);
	return (total);
}
