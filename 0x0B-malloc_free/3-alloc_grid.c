#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of ints
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array
 * OR NULL on failure
 * OR NULL if width or/and height are 0
 */

int **alloc_grid(int width, int height)
{
	/* ha ha 2D array */
	int **ar2d2;
	int *c3po;
	int w;
	int h;
	int i;

	if ( height <= 0 || width <= 0)
		return (NULL);

	ar2d2 = (int **)malloc(width * height * sizeof(int));

	if (ar2d2 == NULL)
		return (NULL);
	/* This for loop checks if the second level pointer is NULL and dealloc
	 * memory if that is the case */
	for (i = 0; i < height; i++)
	{
		*(ar2d2 + i) = (int *)malloc(width * sizeof(int));

		if (*(ar2d2 + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				c3po = ar2d2[i];
				free(c3po);
			}
			free(ar2d2);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			ar2d2[h][w] = 0;
	}

	return (ar2d2);
}
