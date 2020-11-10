#include "holberton.h"

/**
 * create_file - creates a file of variable name
 * (permissions should be rw-------)
 * @filename: name of created file
 * @text_content: text to be written into file
 *
 * Return: 1 on SUCCESS
 * -1 on FAILURE
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i, textlen = 0;

	if (text_content == NULL)
		textlen = 0;
	else
	{
		for (i = 0; text_content[i]; ++i, ++textlen)
			;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, textlen);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
