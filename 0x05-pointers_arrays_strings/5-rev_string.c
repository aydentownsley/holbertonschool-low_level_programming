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
	int n = 0;
	char tmp[10];

	len = 0;

        while (s[len] != '\0')
        {
                len++;
        }

	for (m = len - 1; m >= 0; m--)
	{
		tmp[n] = s[m];
		n++;
	}

	for (n = 0; n <= len - 1; n++)
	{
		s[n] = tmp[n];
	}

}
