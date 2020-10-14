#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all args of program
 *
 * @ac: arguments count
 * @av: array of args
 *
 * Return: NULL if ac is 0 OR av is NULL
 * OR NULL if fail
 * OR POINTER to new string
 */

char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int i = 0;
	int sz = 0;
	char *new = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			sz++;
	}

	new = (char *)malloc((ac + sz + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			new[i] = av[a][b];
			i++;
		}
		new[i] = '\n';
		i++;
	}
	new[i] = '\0';

	return (new);
}
