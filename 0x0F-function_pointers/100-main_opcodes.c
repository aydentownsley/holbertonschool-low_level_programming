#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of main function
 *
 * @argc: num of args
 * @argv: array of arg values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	code = atoi(argv[1]);

	return (0);
}
