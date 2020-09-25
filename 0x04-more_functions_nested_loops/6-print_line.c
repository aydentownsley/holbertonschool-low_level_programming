#include "holberton.h"

/**
 * print_line - print "_" n times
 * @n: input for number of prints
 * Return: void
 */

void print_line(int n)
{
	int st;

	if (n >= 0)
	{
		for (st = 0; st < n; st++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
