#include <stdio.h>

/**
 * main - prints lower case alphabet and then capital alphabet
 *
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
