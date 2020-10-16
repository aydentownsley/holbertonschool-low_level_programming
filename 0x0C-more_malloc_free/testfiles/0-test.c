#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: size needed to allocate
 *
 * Return: pointer to allocated memory
 * OR exit with 98 value
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
