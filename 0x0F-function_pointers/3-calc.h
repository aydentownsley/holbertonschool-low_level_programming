#ifndef _3_CALC_H_
#define _3_CALC_H_

/* headers */
#include <stdio.h>
#include <stdlib.h>

/* Operator  Prototypes */
int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/* Appropraite pointer Prototype */
int (*get_op_func(char *s))(int, int);

/* Structures */
/**
 * struct op - Struct op
 *
 * @op: the operator
 * @f: the function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /* _3_CALC_H_ */
