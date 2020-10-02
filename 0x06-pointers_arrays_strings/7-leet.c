#include "holberton.h"

/**
 * leet - encodes strings into 1337
 *
 * @s: pointer to string
 *
 * Return: pointer
 */

char *leet(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'A' || s[i] == 'a')
			s[i] = 52;
		else if (s[i] == 'E' || s[i] == 'e')
			s[i] = 51;
		else if (s[i] == 'O' || s[i] == 'o')
			s[i] = 48;
		else if (s[i] == 'T' || s[i] == 't')
			s[i] = 55;
		else if (s[i] == 'L' || s[i] == 'l')
			s[i] = 49;
		else
			continue;
	}

	return (s);
}
