#include "holberton.h"

/**
 * _pow_recursion - returns value of x to y power
 *
 * @x: input of num to be raised to power
 * @y: exponent
 *
 * Return: product
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
		
	return (x * _pow_recursion(x, (y - 1)));
}
