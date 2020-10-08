#include "holberton.h"

/**
 * _strlen_recursion - gets length of string
 *
 * @s: pointer to string
 *
 * Return: strlen as int
 */

int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
		return (1);

	return (1 + _strlen_recursion(s + 1));
}
