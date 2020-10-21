#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/* Prototype of _putchar */
int _putchar(char);

/* Prototype of print_name */
void print_name(char *, void (*f)(char *));

/* Prototype of array_iterator */
void array_iterator(int *, size_t, void(*)(int));

#endif /* _FUNCTION_POINTERS_H_ */
