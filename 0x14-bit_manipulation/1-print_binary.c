#include "holberton.h"

/**
 * print-binary - prints the binary representation of a number
 *
 * @n: input number
 *
 * Return: prints string of binary
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
