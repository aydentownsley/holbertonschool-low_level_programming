#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Prototype of putchar */
int _putchar(char);

/* Proto of create array */
char *create_array(unsigned int, char);

/* Proto of _strdup */
char *_strdup(char *);

/* Proto of str_concat */
char *str_concat(char *, char *);

/* Proto of create array */
int **alloc_grid(int, int);

/* Proto of free grid */
void free_grid(int **, int);

/* Proto of argstostr */
char *argstostr(int, char **);

/* Proto of strtow */
char **strtow(char *);

#endif /*_HOLBERTON_H_*/
