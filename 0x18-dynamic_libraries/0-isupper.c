#include "holberton.h"

/**
 * _isupper - checks if uppercase
 * @c: is the int value of a char passed in
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
