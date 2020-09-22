#include "holberton.h"

/**
 * print_last_digit - outputs the last digit
 * @n: is the input
 * Return: the int
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;

	n = (n % 10);

	_putchar(n + 48);

	return (n);
}
