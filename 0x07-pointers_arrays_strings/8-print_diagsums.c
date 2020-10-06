#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the two diagonal sums of an n size 2d array
 *
 * @a: pointer to 2D array
 * @size: size of array
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int d1, d2, asum = 0, bsum = 0;

	for (d1 = 0; d1 < (size * size); d1 += (size + 1))
	{
		asum += a[d1];
	}

	for (d2 = size - 1; d2 < (size * size) - 2; d2 += (size - 1))
	{
		bsum += a[d2];
	}

	printf("%d, %d\n", asum, bsum);

}
