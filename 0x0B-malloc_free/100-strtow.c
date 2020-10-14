#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split a string into words
 *
 * @str: string to be split
 *
 * Return: POINTER to a new array of "words"
 * OR NULL if str is NULL or empty
 * OR NULL if fail
 */

char **strtow(char *str)
{
	char *new;
	int a;
	int sz;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (sz = 0; str[sz] != '\0'; sz++)
		;

	/* sz + 2 is to accomodate for newline and escape char */
	new = (char *)malloc((a + 2) * sizeof(char));

	return (new);
}
