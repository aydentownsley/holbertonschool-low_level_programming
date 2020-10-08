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
	if (*s == '\0')
		_putchar(10);
	
	if (*s) 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
