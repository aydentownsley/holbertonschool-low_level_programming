#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: num of args
 * @argv: pointer to array of args
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, num3 = 0;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		num3 = (num1 * num2);
		printf("%d\n", num3);
	}

	return (0);
}
