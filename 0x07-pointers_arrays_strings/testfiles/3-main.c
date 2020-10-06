#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "abcdef";
    char *f = "";
    unsigned int n;
    unsigned int k;
    
    n = _strspn(s, f);
    k = _strspn(f, s);
    printf("%u\n", n);
    printf("%u\n", k);
    return (0);
}
