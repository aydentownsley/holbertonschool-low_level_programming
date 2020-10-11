#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: is the character to print
 *
 * Return: 1 if lower, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
