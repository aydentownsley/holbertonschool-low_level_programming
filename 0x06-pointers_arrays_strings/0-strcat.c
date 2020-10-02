#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be added onto
 * @src: string to add on
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int lens = 0, lend = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}

	while (src[lens] != '\0')
	{
		dest[lend] = src[lens];

		lens++;
		lend++;
	}

	return (dest);
}
