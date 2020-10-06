#include "holberton.h"

/**
 * _strspn - function the get num of bytes of sub in main string
 *
 * @s: string
 * @accept: string to be searched
 *
 * Return: num of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				break;
		}
		if (!accept[k])
			break;
	}
	return (i);
}
