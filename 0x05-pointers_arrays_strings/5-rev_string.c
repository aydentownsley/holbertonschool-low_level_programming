#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: input pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int m;
	char tmp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	for (m = 0; m <= len; m++, len--)
	{
		tmp = s[m];
		s[m] = s[len];
		s[len] = tmp;
	}
}
