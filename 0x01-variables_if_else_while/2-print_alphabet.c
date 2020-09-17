#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
