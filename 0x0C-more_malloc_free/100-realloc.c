#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates memory
 *
 * @ptr: pointer to previously allocated array
 * @old_size: old size of array
 * @new_size: new size of array
 *
 * Return: POINTER to new allocated array
 * OR NULL if alloc fails
 * OR if new_size > old_size
 * OR if ptr is NULL
 * OR if new_size = 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		new = malloc(new_size);

		if (!new)
			return (NULL);

		_memcpy(new, ptr, old_size);

		free(ptr);
		return (new);
	}	

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (!new)
		return (NULL);

	_memcpy(new, ptr, old_size);

	free(ptr);
	return (new);
}
