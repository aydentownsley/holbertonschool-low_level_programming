#include <stdio.h>

/**
 * main - prints all combos of double digits numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int m;
	int p;

	p = 49;
	m = 48;

	for (n = 48; n <= 56; n++)
	{
		for (m = p; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 56 && m == 57)
				break;
			putchar(',');
			putchar(' ');
		}
		p++;
	}

	putchar('\n');

	return (0);
}
