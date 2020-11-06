#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at nth index
 *
 * @n: pointer to int
 * @index: place of bit to be changed to 1
 *
 * Return: 1 if succesful
 * -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (n == NULL)
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
