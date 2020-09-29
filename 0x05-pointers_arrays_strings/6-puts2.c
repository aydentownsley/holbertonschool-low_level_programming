#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: input pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		if (len == 0 || len % 2 == 0)
			_putchar(str[len]);
		len++;
	}

	_putchar(10);
}
