#include "holberton.h"

/**
 * print_square - prints a square of n size with #
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int w;
	int h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar(10);
			w = 0;
		}
	}
	else
		_putchar(10);
}
