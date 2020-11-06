#include "holberton.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian
 * 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *check = (char *)&x;

	if (*check)
		return (1);
	else
		return (0);
}
