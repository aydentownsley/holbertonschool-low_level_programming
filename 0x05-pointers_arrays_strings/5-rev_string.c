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
	int n = 0;
	char tmp[10];

	for (len = _strlen(s) - 1; len >= 0; len--)
	{
		tmp[n] = s[len];
		n++;
	}

	for (n = 0; n <= _strlen(s) - 1; n++)
	{
		s[n] = tmp[n];
	}

}
