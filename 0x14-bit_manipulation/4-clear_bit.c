#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at the nth index
 *
 * @n: pointer to number
 * @index: location of bit to be cleared
 *
 * Return: 1 if successful
 * -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	if (n == NULL)
		return (-1);
	x = 1 << index;

	*n = *n ^ x;

	return (1);
}
