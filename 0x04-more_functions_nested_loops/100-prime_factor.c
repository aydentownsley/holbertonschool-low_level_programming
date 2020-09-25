#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long num1;
	long lfact;
	long tmp;

	lfact = 2;
	
	for (num1 = 1; num1 < 612852475142 / 2; num1++)
	{
		if (612852475143 % num1 == 0)
		{
			tmp = 612852475143 / num1;	
			if (tmp > lfact)
				lfact = tmp;
		}
	}

	printf("%ld", lfact);

	return (0);
}
