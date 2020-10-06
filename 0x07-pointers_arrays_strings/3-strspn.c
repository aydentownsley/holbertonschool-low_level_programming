#include <stdio.h>
#include "holberton.h"

/**
 * _strspn - gets length of prefix
 *
 * @s: pointer to string
 * @accept: array of bytes to check s against
 *
 * Return: count pointing to match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != accept[k] && accept[k] != '\0')
			k++;
		else if (s[i] == accept[k])
		{
			count++;
			i++;
			k = 0;
		}
		else if (accept[k] == '\0')
			break;
	}
	return (count);
}
