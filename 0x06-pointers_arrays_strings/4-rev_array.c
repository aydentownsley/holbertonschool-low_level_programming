#include "holberton.h"

/**
 *
 * reverse_array - reverse the contents of an array
 *
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	
	for (i = 0; i <= n; n--, i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
