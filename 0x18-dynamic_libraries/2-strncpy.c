#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to where string will be copied to
 * @src: string to be copied
 * @n: length of src to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
