#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int count;
	int num;
	int stop;
	int loop;

	for (loop = 0; loop < 10; loop++)
	{
		stop = 57;
		for (count = 0; count <= 1; count++)
		{
			for (num = 48; num <= stop; num++)
			{
				if (count == 1)
				{
					_putchar(49);
					stop = 52;
				}
				_putchar(num);
			}
		}
		_putchar(10);
	}
}
