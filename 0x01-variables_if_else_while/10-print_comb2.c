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

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 57 && m == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
