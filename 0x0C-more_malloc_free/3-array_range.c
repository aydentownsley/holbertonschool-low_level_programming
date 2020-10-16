#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 *
 * @min: bottom limit
 * @max: upper limit
 *
 * Return: POINTER to new array
 * OR NULL if min > max
 * OR malloc fail
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);
	/* acommodates for FULL range */
	size = max - min + 1;
	/* +1 for NULL byte */
	ar = calloc(sizeof(int),(size + 1));

	if (ar == NULL)
		return (NULL);
	/* fills array with min to max */
	for (i = 0; i <= size; i++)
	{
		ar[i] = min;
		++min;
	}

	return (ar);
}
