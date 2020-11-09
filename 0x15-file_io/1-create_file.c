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
	/* initiate variables*/
	int fd, wr, i, textlen = 0;

	/* get length of text */
	if (text_content == NULL)
		textlen = 0;
	else
	{
		for (i = 0; text_content[i]; ++i, ++textlen)
			;
	}

	/* "open" file to create if doesnt exist */
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	/* write text into created file */
	wr = write(fd, text_content, textlen);

	if (wr == -1)
		return (-1);

	/* close file */
	close(fd);

	/* return 1 */
	return (1);
}
