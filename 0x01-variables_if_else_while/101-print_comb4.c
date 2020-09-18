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
	int q;
	int r;
	int s;

	m = 48;
	p = 49;
	q = 49;
	r = 50;
	s = 51;

	for (n = 48; n <= 55; n++)
	{
		for (m = p; m <= 56; m++)
		{
			for (q = r; q <= 57; q++)
			{
				if (n == m || n == q || m == q)
					break;
				putchar(n);
				putchar(m);
				putchar(q);
				if (n == 55 && m == 56 && q == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			r++;
		}
		p++;
		r = s++;
	}
	putchar('\n');
	return (0);
}
