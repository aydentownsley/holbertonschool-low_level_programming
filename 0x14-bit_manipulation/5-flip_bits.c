#include "holberton.h"

/**
 * flip_bits - returns how many flips (1->0 or 0->1)
 * needed to get from n to m
 *
 * @n: passed number
 * @m: second passed number
 *
 * Return: num of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			++x;

		n = n >> 1;
		m = m >> 1;
	}

	return (x);
}
