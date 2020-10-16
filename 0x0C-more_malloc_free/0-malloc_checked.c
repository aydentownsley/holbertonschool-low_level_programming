#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size being passed in as sizeof(_var_type) * _num_
 *
 * Return: POINTER to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (!b)
		exit(98);

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
