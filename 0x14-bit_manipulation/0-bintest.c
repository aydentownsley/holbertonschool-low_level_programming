#include "holberton.h"

/**
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, idx = 0, result = 0;

	for (idx = 0; b[idx] != '\0'; ++idx)
	{
		if (b[idx] == '0')
			x = 0;
		else if (b[idx] == '1')
			x = 1;
		else
			return (0);

		result += x;
		if (b[idx + 1] != '\0')
			result = result << 1;
	}

	return (result);
}
