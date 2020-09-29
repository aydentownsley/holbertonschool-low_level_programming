#include "holberton.h"

/**
 * puts_half - prints half a string
 *
 * @str: intput pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n++)
	{
		if (len % 2 == 0)
		{
			if (n >= len / 2)
				_putchar(str[n]);
		}
		else
		{
			if (n > (len / 2) - 1)
				_putchar(str[n]);
		}
	}

	_putchar(10);
}
