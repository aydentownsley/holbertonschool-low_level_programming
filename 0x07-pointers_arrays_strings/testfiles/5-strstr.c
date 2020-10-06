#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - find first occurence of a string in a string
 *
 * @haystack: string to be searched
 * @needle: substring to be searched for
 *
 * Return: pointer to substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *occur = NULL;
	char *begin = needle;
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}

	while (*haystack != '\0')
	{
		if (*haystack == *begin)
		{
			if (*(begin + 1) != '\0')
			{
				haystack++;
				begin++;
			}
			else
			{
				occur = begin - (len - 1);
				break;
			}
		}
		else
			haystack++;
	}

	return (occur);
}
