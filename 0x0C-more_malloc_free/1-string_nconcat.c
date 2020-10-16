#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns string length
 *
 * @st: string being passed
 *
 * Return: int of string length
 */

int _strlen(char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
		;

	return (a);
}

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
	unsigned int j = 0, i = 0, len1, len2;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		p = malloc((sizeof(*p) * (len1 + len2)));
	else
		p = malloc((sizeof(*p) * (len1 + n + 1)));

	if (p == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (; s2[j] != '\0' && j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';
	return (p);
}
