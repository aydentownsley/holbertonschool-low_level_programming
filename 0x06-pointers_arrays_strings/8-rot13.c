#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - translate string to rot13i
 *
 * @s: pointer to string
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int n;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[i] == a[n])
			{
				s[i] = b[n];
				break;
			}
		}
	}

	return (s);
}
