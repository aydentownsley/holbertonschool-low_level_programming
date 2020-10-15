#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input of string 1
 * @s2: input of string 2
 * @n: number of chars from s2 to use
 *
 * Return: POINTER to new allocated string
 * OR NULL if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc((strlen(s1) + strlen(s2) + 1));

	if (!p)
		return (NULL);

	for (; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	if (n > strlen(s2))
	{
		for (; s2[j] != '\0'; j++)
		{
			p[i] = s2[j];
			++i;
		}
	}
	else
	{
		for (; j < n; j++)
		{
			p[i] = s2[j];
			++i;
		}
	}
	++i;
	p[i] = '\0';
	return (p);
}
