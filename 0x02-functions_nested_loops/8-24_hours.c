#include "holberton.h"

/**
 * jack_bauer - prints every minute of 24 hour clock
 *
 * Return: 0 if successful
 */

void jack_bauer(void)
{
	int h10, h1, m10, m1, limit, loop;

	limit = 57;
	loop = 0;

	for (h10 = 48; h10 <= 50; h10++)
	{
		for (h1 = 48; h1 <= limit; h1++)
		{
			if (loop == 2)
				limit = 51;
			for (m10 = 48; m10 <= 53; m10++)
			{
				for (m1 = 48; m1 <= 57; m1++)
				{
					_putchar(h10);
					_putchar(h1);
					_putchar(58);
					_putchar(m10);
					_putchar(m1);
					_putchar(10);
				}
			}
		}
		loop++;
	}
}
