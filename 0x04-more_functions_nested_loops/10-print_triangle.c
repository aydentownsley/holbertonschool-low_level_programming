#include "holberton.h"

/**
 * print_triangle - prints a triangle of input size
 * @size: input of size
 * Return: void
 */

void print_triangle(int size)
{
	int count;
	int sp;
	int hash;

	if (size > 0)
	{
		for (count = 0; count < size; count ++)
		{
			for (sp = size - 1; sp > count; sp--)
			{
				_putchar(32);
			}
			for (hash = 0; hash <= count; hash++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
