#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments given
 *
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	/* initialize valist for n number of arguments */
	va_start(list, n);

	/* access all the args in list and add them into var sum*/
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	/* clean mem reserved for list */
	va_end(list);

	return (sum);
}
