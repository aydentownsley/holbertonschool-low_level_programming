#include "variadic_functions.h"

/**
 * print_strings - print strings passed in
 *
 * @separator: string to seperate strings
 * @n: number of strings (size of va_list)
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	/* initiate list */
	va_start(ls, n);

	/* cycle through all elements of list */
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ls, char *));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);

	va_end(ls);
}
