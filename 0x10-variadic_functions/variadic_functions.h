#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARAIDIC_FUNCTIONS_H_

/* other headers */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* Function Prototypes */
int sum_them_all(const unsigned int, ...);

void print_numbers(const char *, const unsigned int, ...);

void print_strings(const char *, const unsigned int, ...);

void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTION_H_ */
