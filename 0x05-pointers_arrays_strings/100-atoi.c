#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an int
 * @s: pointer to string
 * Return: 0
 */

int _atoi(char *s)
{
	int len = 0, tmp = 0, tmp2 = 0;
	unsigned int sign = 1;

	while (s[len] != '\0')
	{
		if (s[len] >= 48 && s[len] <= 57)
		{
			tmp2 = s[len] - 48;
			tmp = (tmp * 10) + tmp2;
		}
		else if (s[len] == 45)
		{
			sign *= 1;
		}
		else if ((s[len] < 48 || s[len] > 57) && tmp == 0)
		{
			;
		}
		else
			break;
		len++;
	}

	return (tmp * sign);
}
