#include "holberton.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/*
 * main - prints the name of the projects file
 *
 * @argc: number of arguments 
 * @argv: pointer to array of argument names
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	UNUSED (argc);
	printf("%s\n", argv[0]);
	
	return (0);
}
