#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed in
 *
 * @seperator: string between numbers
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	/* initialize ls for n number of arguments */
	va_start(ls, n);

	/* access all the args of ls */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
	}
	putchar(10);

	va_end(ls);
}
