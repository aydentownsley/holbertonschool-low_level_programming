#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: pointer to string
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 44 || s[i] == 59 || s[i] == 46 || s[i] == 33 || s[i] == 63 || s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] = s[i + 2] - 32;
		}
	}

	return s;
}
