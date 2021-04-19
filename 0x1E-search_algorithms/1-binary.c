#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <ctype.h>

/**
 * help - engine that allows extra pass for recursive
 *
 * @array: array to be searched
 * @high: high value
 * @low: low value
 * @value: value to be searched for
 *
 * Return: index or -1
 */
int help(int *array, unsigned int high, unsigned int low, int value)
{
	unsigned int i = low, mid = (high + low) / 2;

	if (low > high)
		return (-1);

	printf("searching in array: ");
	while (i <= high)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (help(array, mid - 1, low, value));
	else
		return (help(array, high, mid + 1, value));
}

/**
 * binary_search - searching ordered array
 * for value using binary search
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: return index of VALUE
 * OR NULL if not present, or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (help(array, size - 1, 0, value));
}
