#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees memory allocation for created dog
 *
 * @d: pointer to dog needed to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		exit (100);

	free(d);
}
