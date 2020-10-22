#include "3-calc.h"
#include <string.h>

/**
 * main - performs math on two ints
 *
 * @argv: number of args
 * @argc: array of arg values
 *
 * Return: result of maths done on ints
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*func_op)(int, int);

	/* exits if there are more than 4 args */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* exits if not a valid operator */
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/'
	&& *argv[2] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	/* exits if a is / or % by b = 0 */
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/* turns a and b into ints and stores operator in s */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func_op = get_op_func(argv[2]);

	/* passes argument to get_op_func */
	printf("%d\n", func_op(a, b));
	return (0);
}
