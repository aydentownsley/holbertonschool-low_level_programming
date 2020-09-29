#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of ints
 *
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int lim;

	for (lim = 0; lim < n; lim++)
	{
		printf("%d", a[lim]);
		if (lim != n - 1)
			printf(", ");
	}
	printf("\n");
}
