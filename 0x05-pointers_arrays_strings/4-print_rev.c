#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: input pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar(10);
}
