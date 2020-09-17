#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is usefuli\" - Dora Korpar, 2015-1\
0-19\n";
	int str_len = strlen(str);

	int write(str, stderr, str_len);

	return (1);
}
