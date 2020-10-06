#include "holberton.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, asum = 0, bsum = 0;

	for (d1 = 0; d1 < (size * size); d1 += (size + 1))
	{
		asum += a[d1];
	}

	for (d2 = 0; d2 < (size * size) - 1; d2 += (size - 1))
	{
		bsum += a[d2];
	}

	printf("%d, %d\n", asum, bsum);

}
