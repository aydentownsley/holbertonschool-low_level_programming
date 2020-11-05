#include "holberton.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: a string of 1s and 0s
 *
 * Retrun: UNSIGNED INT conversion
 * OR 0 if string contains chars other
 * that 1 and 0
 * OR b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = atoi(b), decimal = 0, binval = 1;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			++i;
			return (0);
		}
		++i;
	}
	while (binary > 0)
	{
		decimal += (binary % 10) * binval;
		binary = binary / 10;
		binval = binval * 2;
	}

	return (decimal);
}
