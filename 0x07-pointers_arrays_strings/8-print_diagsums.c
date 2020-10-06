#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums of a square matrix
 *
 * @a: pointer to 2D array
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int l, w, asum = 0, bsum = 0;

	while (l <= (size * size))
	{
		asum = asum + a[l];
		l = l + size + 1;
	}

	while (w < (size * size - 1))
	{
		bsum = bsum + a[w];
		w = w + size - 1;
	}

	printf("%d, %d\n", asum, bsum);
}
