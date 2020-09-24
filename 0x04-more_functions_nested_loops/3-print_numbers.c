#include "holberton.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
