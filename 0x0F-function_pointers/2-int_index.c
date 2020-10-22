#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns value for when index i does not return true
 *
 * @array: array to be checked
 * @size: size of passed array
 * @cmp: pointer function
 *
 * Return: index of first no true array element
 * -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
