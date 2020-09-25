#include "holberton.h"

/**
 * print_number - prints integer
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

	if (n > 0)
	{
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
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
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
