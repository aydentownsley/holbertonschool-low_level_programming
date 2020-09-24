#include "holberton.h"

/**
 * print_most_numbers - prints 0-9, but not 2 or 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
			i++;
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar(10);
}
