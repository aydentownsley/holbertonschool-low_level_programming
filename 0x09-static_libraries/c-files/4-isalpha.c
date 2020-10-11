#include "holberton.h"

/**
 * _isalpha - returns value based on if character
 * @c: is character to check
 *
 * Return: 1 if c is letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}