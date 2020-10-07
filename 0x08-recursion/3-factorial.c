#include "holberton.h"

/**
 * factorial - return the factorial of any number
 *
 * @n: input integer
 *
 * Return: factorial product as int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
