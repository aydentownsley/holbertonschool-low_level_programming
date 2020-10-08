#include "holberton.h"

/**
 * plhlp - allows iteration through string with two args
 *
 * @s2: s from main
 * @e: pointer that will
 *
 *
 */

int plhlp(char *s2, int len)
{
	if (s2[len] != '\0')
		len++;

	if (s2 == s2[len])
		return (plhlp(*(s2 + 1), (s2[len - 1]);
	else if ((s2 + 1) == '\0')
		return (1);
	else if (s2 != s2[len])
		return (0);
}

/**
 * is_palindrome - checks is a string is a palindrome
 *
 * @s: a pointer to string to be checked
 *
 * Return: 1 if palindrome, 0 if no
 */

int is_palindrome(char *s)
{
	if ((s + 1) == '\0')
		return (1);
	else
		return (plhlp(s, 0));
		
} 
