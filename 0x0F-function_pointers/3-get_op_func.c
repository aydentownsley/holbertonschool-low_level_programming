#include "3-calc.h"

/**
 * get_op_func - selects the right function to give arguments to
 *
 * @s: char operator
 *
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	return (NULL);
}
