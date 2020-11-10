#include "holberton.h"

/**
 * read_textfile - reads file and writes it to the stdout
 *
 * @filename: name of file to be read and written
 * @letters: number of letter to read and print
 *
 * Return: NUMBER OF LETTER read and printed
 * OR 0 if file can not be opened
 * OR 0 if filename is NULL
 * OR 0 if write fails or does not write expected # of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, charcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	buffer[letters] = '\0';

	rd = read(fd, buffer, letters);
	if (rd < 0)
		return (0);

	charcount = write(1, buffer, rd);

	close(fd);
	free(buffer);

	return (charcount);
}
