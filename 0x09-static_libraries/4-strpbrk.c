#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - locates first occurecne of any byte in a list
 *
 * @s: pointer to string to search
 * @accept: pointer to string of list to be matche against
 *
 * Return: pointer to where first occurence is
 */

char *_strpbrk(char *s, char *accept)
{
	char *occur = NULL;
	char *begin = accept;

	while (*s != '\0')
	{
		if (*s == *begin)
		{
			occur = s;
			break;
		}
		else if (*s != *begin && *begin != '\0')
		{
			begin++;
		}
		else if (*begin == '\0')
		{
			begin = accept;
			s++;
		}
	}

	return (occur);
}
