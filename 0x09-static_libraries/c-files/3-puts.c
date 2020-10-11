#include "holberton.h"

/**
 * _puts - prints a string with newline to stdout
 *
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	_putchar(10);
}
