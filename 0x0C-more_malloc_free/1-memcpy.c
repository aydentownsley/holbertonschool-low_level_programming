#include "holberton.h"

/**
 * _memcpy - copies n bytes of one array to another
 *
 * @src: array to be copied from
 * @dest: array to be copied to
 * @n: number of elements to be copied
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
