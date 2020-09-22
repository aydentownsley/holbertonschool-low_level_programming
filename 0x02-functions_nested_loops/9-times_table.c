#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int n, m, hold, tens, ones;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			hold = n * m;

			tens = hold / 10;
			ones = hold % 10;

			if (tens == 0 && ones == 0)
			{
				_putchar(ones + 48);
			} else if (tens == 0)
			{
				_putchar(32);
				_putchar(ones + 48);
			} else
			{
				_putchar(tens + 48);
				_putchar(ones + 48);
			}

			if (m < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			if (n == 0 && m != 9)
			{
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
