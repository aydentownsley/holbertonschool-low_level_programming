#include "holberton.h"

/**
 * prhlp - allows iteration
 *
 * @n2: n from main
 * @m: int to iterate
 *
 * Return: 1 when done
 */

int prhlp(int n2, int m)
{
	if (n2 == m)
		return (1);
	else if (n2 % m == 0)
		return (0);
	return (prhlp(n2, m + 1));
}

/**
 * is_prime_number - check if number is prime
 *
 * @n: integer to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prhlp(n, 2));
}
