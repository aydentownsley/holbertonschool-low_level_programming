#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (s1[i] == s2[i] && len1 == len2)
		return (0);
	else if (len1 > len2)
		return (1);
	else
		return (-1);

}
