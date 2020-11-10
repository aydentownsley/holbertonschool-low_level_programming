#include "holberton.h"

/**
 * op - opens files
 *
 * @arg: argument from varg
 *
 * Return: -1 if fail
 * OR low positive int if success
 */

int op(char *arg)
{
	int file;

	file = open(arg, O_RDONLY);

	if (file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", arg);
		exit(98);
	}

	return (file);
}

/**
 * cl - closes files
 *
 * @filedes: file designator
 *
 * Return: -1 if fail
 * OR low positive int if success
 */

void cl(int filedes)
{
	close(filedes);

	if (filedes == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
}

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
	int fsource, fdest, rdsource, wrdest;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fsource = op(argv[1]);

	fdest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	rdsource = read(fsource, buffer, 1024);
	if (rdsource == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		cl(fsource);
		cl(fdest);
		exit(98);
	}

	wrdest = write(fdest, buffer, rdsource);
	if (wrdest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(fsource);
	close(fdest);

	return (0);
}
