#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new string in mem
 * which has copy of the string given
 *
 * @str: given string
 *
 * Return: pointer to new string in mem
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for ( ; str[len] != '\0'; len++)
		;

	new = (char *)malloc((len + 1) * sizeof(char));

	if (new != NULL)
	{
		for (i = 0; i <= len + 1; i++)
		{
			new[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}

	return (new);
}
