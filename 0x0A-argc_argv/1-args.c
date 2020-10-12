#include "holberton.h"
#include <stdio.h>
# define UNUSED(x) (void)(x)

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 * @argv: array of argument names
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc);

	return (0);
}
