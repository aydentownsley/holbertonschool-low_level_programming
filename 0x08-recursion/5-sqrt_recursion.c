#include "holberton.h"

/**
 * sqhlp - allows for incrementing of numbers to test against
 *
 * @n2: n from main
 * @m: iterating int
 *
 * Return: int
 */

int sqhlp(int n2, int m)
{
	if ((m * m) == n2)
		return (m);
	else if ((m * m) > n2)
		return (-1);
	return (sqhlp(n2, m + 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 *
 * @n: input integer
 *
 * Return: square root as int
 */

int _sqrt_recursion(int n)
{
	return (sqhlp(n, 1));
}
