#include "holberton.h"

/**
 * plhlp - allows iteration through string with two args
 *
 * @s2: s from main
 * @e: position value of the end of the string
 * @b: position value of beginning of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int plhlp(char *s2, int e, int b)
{
	if (s2[b] == '\0')
		return (1);
	else if (s2[b] == s2[e])
		return (plhlp(s2, --e, ++b));
	else
		return (0);
}

/**
 * _strlen - gets string length
 *
 * @s3: points to string
 * @len: int that stores length
 *
 * Return: int len
 */

int _strlen(char *s3, int len)
{
	if (s3[len] == '\0')
		return (len);

	return (_strlen(s3, ++len));

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
	int end = 0, begin = 0;

	end = _strlen(s, end);

	if (s == '\0')
		return (0);

	return (plhlp(s, --end, begin));
}
