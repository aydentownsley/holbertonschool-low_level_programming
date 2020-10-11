#include "holberton.h"

/**
 * _isdigit - tells if input is a number from 0-9
 * @c: is the input
 * Return: 1 if yes, 0 if no
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
