#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long n;
	long div;
	long lfact;

	n = 612852475143;
	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			lfact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", lfact);
				break;
			}
		}
	}
	return (0);
}
