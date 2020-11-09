#include "holberton.h"

/**
 * append_text_to_file - appends text to an already existing file
 * DO NOT CREATE FILE IF DOES NOT EXIST
 *
 * @filename: file to append text to
 * @text_content: text to be appended
 *
 * Return: 1 on SUCCESS
 * OR if text_content is NULL but FILE EXISTS
 * -1 on failure
 * OR if filename is NULL
 * OR if text_contect is NULL but FILL DOES
 * NOT EXIST
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* initialize variable */
	int fd, wr, i, textlen = 0;

	/* open file, if doesnt exist return -1 */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/* get textlen */
	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i]; ++i, ++textlen)
		;

	/* append needed text, if text is NULL return 1 and close */
	wr = write(fd, text_content, textlen);

	if (wr == -1)
		return (-1);
	printf("write sucess\n");
	/* close file */
	close(fd);

	/* return 1 if success */
	return (1);
}
