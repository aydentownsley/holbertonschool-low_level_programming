#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* This is a prototype function of putchar */
int _putchar(char);

/* This is a prototype of the function _memset */
char *_memset(char *, char, unsigned int);

/* This is a protoype of the function _memcpy */
char *_memcpy(char *, char *, unsigned int);

/* This is a prototype of the function _strchr */
char *_strchr(char *, char);

/* This is a prototype of _strspn */
unsigned int _strspn(char *, char *);

/* This is a prototype of _strpbrk */
char *_strpbrk(char *, char *);

/* This is a prototype of _strstr */
char *_strstr(char *, char *);

/* This is a protoype of print_chessboard */
void print_chessboard(char (*)[]);

/* This is a prototype of print_diagsums */
void print_diagsums(int *, int);

/* This is a prototype for set_string */
void set_string(char **, char *);

#endif /*_HOLBERTON_H_*/
