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
	char **new;
	int wrd;
	int sz = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	int mem = 0;
	int plc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	/* This check for number of words, not chars */
	while (str[sz] != '\0')
	{
		if (str[sz] == ' ')
			sz++;
		else
		{
			while (str[sz] != ' ' && str[sz] != '\0')
				sz++;
			wrd++;
		}
	}

	/* sz + 1 is to accomodate for and escape char */
	new = (char **)malloc((wrd + 1) * sizeof(char *));
	
	/* this while loop gets num of chars and allocated mem */
	while (str[a] != '\0')
	{
		if (str[a] == ' ')
			a++;
		else
		{
			b = 0;
			while (str[a] != ' ' && str[a] != '\0')
			{
				a++;
				b++;
			}
			new[mem] = malloc((b + 1) * sizeof(char));
			mem++;
		}
	}
	
	mem = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			plc = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				new[mem][plc] = str[i];
				i++;
				plc++;
			}
			new[mem][plc] = '\0';
			mem++;
		}
	}

	for (i = 0; new[i] != NULL; i++)
		printf("new[i] = %p\n", new[i]);

	new[mem] = NULL;
	return (new);
}
