#include "holberton.h"

/**
 * _strcpy - copies a string from src to dest, including terminating byte
 * @dest: destination pointer
 * @src: source pointer
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (a = 0; a <= len;  a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
