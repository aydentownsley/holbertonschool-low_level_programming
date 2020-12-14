#include "holberton.h"

/**
 * _strstr - find substring in a string
 *
 * @haystack: string to be searched
 * @needle: substring to be searched for
 *
 * Return: pointer to found substring in string, or void if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *k = needle;
	int len;

	if (*needle == '\0')
		return (haystack);

	for (len = 0; *k != '\0'; k++)
	{
		len++;
	}

	k = needle;

	for ( ; *i != '\0'; i++)
	{
		if (*i == *k)
		{
			if (*(k + 1) == '\0')
			{
				i = i - (len - 1);
				return (i);
			}
			else
				k++;
		}
		else if (*(i + 1) == '\0')
		{
			return ('\0');
		}
		else
		{
			k = needle;
		}
	}
	return (i);
}
