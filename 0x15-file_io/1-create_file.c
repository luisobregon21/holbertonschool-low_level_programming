#include "main.h"
/**
 * create_file - function creates a file.
 * @filename: name of the file created.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on fail.
 * fails are if file can't be created, written of if write fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0, holder;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT, 0600);
		if (file == -1)
			return (-1);

		close(file);
		return (1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}
	holder = write(file, text_content, len);
	if (holder == -1)
		return (-1);

	close(file);
	return (1);
}
