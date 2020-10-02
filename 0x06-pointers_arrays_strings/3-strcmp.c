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
	int i = 0, val = 0;

	if (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			val = 0;
		i++;
	}
	else if (s1[i] > s2[i])
	{
		val = (s1[i] - s2[i]);
	}
	else
	{
		val = (s1[i] - s2[i]);
	}

	return (val);
}
