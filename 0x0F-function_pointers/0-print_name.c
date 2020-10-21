#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 *
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);

	f(name);
}
