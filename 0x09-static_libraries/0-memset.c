#include "holberton.h"

/**
 * _memset - fills memory with constant char
 *
 * @s: pointer to array
 * @b: constant char
 * @n: size of array
 *
 * Return: pointer to s memory array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
