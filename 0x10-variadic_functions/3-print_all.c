#include "variadic_functions.h"

/**
 * print_all - print all char, int, float, and string passed
 * into the function
 *
 * @format: list of type of args pased to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	char *ptr;
	int i = 0;

	/* initiates the ls */
	va_start(ls, format);

	/* interates through all elements of format */
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ls, int));
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				ptr = va_arg(ls, char *);
				if (ptr == NULL)
					printf("(nil)");

				printf("%s", ptr);
				break;
			default:
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] ==
		's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(ls);
}
