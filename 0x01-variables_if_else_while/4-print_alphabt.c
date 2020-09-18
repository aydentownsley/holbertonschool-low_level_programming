#include <stdio.h>

/**
 * main - prints lower case alphabet without q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
	}

	putchar('\n');
	return (0);
}
