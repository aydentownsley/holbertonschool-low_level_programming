#include "header.h"

/**
 * main - outputs the alphabet
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int num1;

	for (num1 = 97; num1 <= 122; num1++)
	{
		_putchar(num1);
	}

	_putchar(10);
}
