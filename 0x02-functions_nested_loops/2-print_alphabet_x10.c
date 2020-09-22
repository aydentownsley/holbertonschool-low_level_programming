#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int t;
	int alpha;

	for (t = 0; t < 10; t++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
