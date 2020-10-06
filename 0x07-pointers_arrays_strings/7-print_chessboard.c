#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 *
 * @a: array of chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int l, w;

	for (l = 0; l <= 7; l++)
	{
		for (w = 0; w <= 7; w++)
		{
			if (w == 7)
			{
				_putchar(a[l][w]);
				_putchar(10);
			}
			else
			{
				_putchar(a[l][w]);
			}
		}
	}
}
