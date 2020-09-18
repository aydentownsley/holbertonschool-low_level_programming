#include <stdio.h>

/**
 * main - prints numbers 1-9
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	putchar('\n');
	return (0);
}
