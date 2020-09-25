#include "holberton.h"

/**
 * print_number - prints int using putchar
 * @n: input int
 * Return: void
 */
void print_number(int n)
{
	int tmp1;
	int tmp2;
	int tmp3;

	tmp2 = 0;
	tmp3 = 0;

	if (n != 0)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		while (n > 0)
		{
			tmp1 = n % 10;
			tmp2 = (tmp2 * 10) + tmp1;
			n = n / 10;
		}
		while (tmp2 > 0)
		{
			tmp3 = tmp2 % 10;
			_putchar(tmp3 + 48);
			tmp2 = tmp2 / 10;
		}
	}
	else
	{
		_putchar(48);
	}
}
