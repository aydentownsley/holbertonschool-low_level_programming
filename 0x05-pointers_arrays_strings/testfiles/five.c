#include "holberton.h"

/**
 * five -
 *
 * @s:
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int m;
	int tmp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (m = 0; m <= len - 1; m++, len--)
	{
		tmp = s[m];
		s[m] = s[len];
		s[len] = tmp;
	}
}
