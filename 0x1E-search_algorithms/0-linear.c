#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - checks each element of structure
 * until item is found/not found
 *
 * array - array to linearly search
 * size  - size of the array
 * value - element searched for
 *
 * Return: INDEX of value in array
 * OR NULL if not present in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}
