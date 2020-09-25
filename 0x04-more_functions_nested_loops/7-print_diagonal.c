#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of n length
 * @n: is the input that determines length
 * Return: void
 */

void print_diagonal(int n)
{
	int count;
	int sp;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (sp = 0; sp < count; sp++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
