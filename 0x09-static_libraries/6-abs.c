#include "holberton.h"

/**
 * _abs - outputs absolute value of int
 * @n: is input
 * Return: 0, 1, -1
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	if (n < 0)
	{
		n = n * -1;
		return (n);
	}

	return (n);
}
