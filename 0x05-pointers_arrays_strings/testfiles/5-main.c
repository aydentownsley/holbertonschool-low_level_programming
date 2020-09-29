#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[19] = "This is killing me";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
