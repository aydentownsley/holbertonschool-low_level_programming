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
		if (i == 0)
			s[i] = s[i] - 32;
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||\
		s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i\
		] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\n' || s[i] \
		== '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
