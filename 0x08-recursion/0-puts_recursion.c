#include "holberton.h"

/**
 * _puts_recursion - prints string followed by newline
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
	else
		_putchar(10);
}
