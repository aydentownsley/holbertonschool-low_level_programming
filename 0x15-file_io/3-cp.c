#include "holberton.h"

/**
 * main - copies contents of one file to another
 *
 * @argv: array of args
 * @argc: number of args
 *
 * Return: [0] on SUCCESS
 * [97] if argc is wrong
 * [98] if source file does not exist,
 * or an not be read
 * [99] AND PRINT if fail to write or
 * can not create dest file
 * [100] AND PRINT if fail to close
 */

int main(int argc, char *argv[])
{
	/* initiate variable */
	int fd, fd2, rd, wr, cl, cl2;
	char *buffer[1024];

	/* check argc, exit 97 */
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* open file varg[1] and read, fail: exit 98 and print */
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	rd = read(fd, buffer, 1024);

	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* write to dest or create dest, fail: exit 99 and print */
	fd2 = open(argv[2], O_WRONLY | O_CREAT, 0664);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	wr = write(fd2, buffer, rd);

	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* close file, fail: exit 100 and print */
	cl = close(fd);
	cl2 = close(fd2);

	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

        if (cl2 == -1)
        {
                dprintf(2, "Error: Can't close fd %d\n", fd2);
                exit(100);
        }

	return (0);
}
