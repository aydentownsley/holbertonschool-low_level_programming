#include "holberton.h"

/**
 * swap_int - swap the value of two ints
 *
 * @a: input value of pointer
 * @b: input value of pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
