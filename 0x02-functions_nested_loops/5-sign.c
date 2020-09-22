#include "holberton.h"

/**
 * print_sign - prints the sign of number
 * @n: is the input
 *
 * Return: 1 if n is +, 0 if n is zero, -1 if n is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	return (n);
}
