#include "holberton.h"

/**
 * get_bit - returns value of a bit at a given index
 *
 * @n: number being passed in
 * @index: index of n
 *
 * Return: value of bit at n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	x = (n >> index) & 1;

	if ((x == 1) || (x == 0))
		return (x);
	else
		return (-1);
}
