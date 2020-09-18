#include <stdio.h>

/**
 * main - prints all combos of single digits numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if ( n == 57)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
