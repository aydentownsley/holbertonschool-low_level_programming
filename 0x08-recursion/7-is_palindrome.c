#include "holberton.h"

/**
 * plhlp - allows iteration through string with two args
 *
 * @s2: s from main
 * @e: pointer that will
 *
 *
 */

int plhlp(char *s2, char *e)
{
	if (*(e + 1) != '\0')
		e++;

	if (s2 == e)
		return (plphlp((s2 + 1), (e - 1));
	else if (
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
	if ((s + 1) = '\0')
		return (1);
	else
		return (plhlp(s, s));
		
} 
