#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: num of arguments
 * @argv: pointer to array of args
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1, tmp = 0, check = 1;

	for (; i < argc; i++)
	{
		check = isdigit(*argv[i]);

		if (*argv[i] < 0)
		{
			continue;
		}
		else if (check == 0)
		{
			break;
		}
		else
		{
			tmp = atoi(argv[i]);
			sum = sum + tmp;
		}
	}

	if (check == 0)
		printf("Error\n");
	else if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", sum);

	return (0);
}
