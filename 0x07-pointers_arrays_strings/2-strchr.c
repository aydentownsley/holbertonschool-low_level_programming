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
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
