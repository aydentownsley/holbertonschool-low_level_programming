#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input that will be counted from
 * Return: void
 */

void print_to_98(int n)
{
	int start;

	start = n;

	if (start <= 98)
	{
		for (start = n; start <= 98; start++)
		{
			if (start == 98)
			{
				printf("%d", start);
				break;
			}
			printf("%d, ", start);
		}
	}
	else if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			if (start == 98)
			{
				printf("%d", start);
				break;
			}
			printf("%d, ", start);
		}
	}
	putchar(10);
}
