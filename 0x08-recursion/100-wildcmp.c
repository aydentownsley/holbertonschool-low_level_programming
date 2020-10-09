#include "holberton.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: 1 if MATCH, 0 if NO
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(++s1, ++s2));
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, ++s2) || wildcmp(++s1, s2))
		{
			return (1);
		}

		if (*(s1 + 1) != '\0' && *s2 == '\0')
		{
			return (0);
		}
	}
	return (0);
}
