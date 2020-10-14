#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with char
 *
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: array a
 */

char *create_array(unsigned int size, char c)
{
	char *a = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = (char *)malloc(size * sizeof(char));

		if (a != NULL)
		{
			for (i = 0; i < size; i++)
			{
				a[i] = c;
			}
		}
	}
	return (a);
}
