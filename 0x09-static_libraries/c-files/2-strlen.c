#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - outputs the length of a string
 *
 * @s: input of string stored in char pointer
 *
 * Return: int of string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
