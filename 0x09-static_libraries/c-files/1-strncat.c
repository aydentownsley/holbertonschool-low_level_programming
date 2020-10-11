#include "holberton.h"

/**
 * _strncat - concatenate specified length of string
 *
 * @dest: string that will be added to
 * @src: string to be added from
 * @n: length of src to be concatenated.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lens = 0, lend = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}

	while (lens + 1 <= n)
	{
		dest[lend] = src[lens];

			lens++;
			lend++;

		if (src[lens] == '\0')
			break;
	}

	return (dest);
}
