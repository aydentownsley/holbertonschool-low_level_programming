#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocated memory for an array
 *
 * @nmemb: number of array elements
 * @size: size of elements
 *
 * Return: POINTER to allocated array
 * OR NULL if allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = nmemb * size;
	p = malloc(a);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		p[i] = 0;

	return (p);
}
