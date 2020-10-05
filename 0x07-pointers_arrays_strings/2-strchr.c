#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - loctates a specific char in a string
 *
 * @s: pointer to string
 * @c: char to be located
 *
 * Return: POINTER to location of char, or NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = s++;
		s++;
	}

	return (p);
}
