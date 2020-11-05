#include "holberton.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: a string of 1s and 0s
 *
 * Return: UNSIGNED INT conversion
 * OR 0 if string contains chars other
 * that 1 and 0
 * OR b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, binval = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			++i;
			return (0);
		}
		++i;
	}
	--i;

	while (i >= 0)
	{
		decimal += ((b[i] - 48) % 10) * binval;
		--i;
		binval = binval * 2;
	}

	while ((b >> 1) != 0)
	{
		printf("b >> 1: %d\n", b >> 1);
	}
	return (decimal);
}
