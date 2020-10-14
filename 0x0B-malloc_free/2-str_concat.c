#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new concatenated string in new allocated mem
 * OR NULL if empty string is passed
 * OR NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int sz1;
	int sz2;
	char *cs;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* getting sizes of s1 and s2 minus escape char */
	for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		;
	for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		;

	/* the plus one is for the espace char */
	cs = (char *)malloc((sz1 + sz2 + 1) * sizeof(char));

	/* If statement assures that cs has been allocated memory */
	if (cs != NULL)
	{
		for (i = 0; i < sz1; i++)
			cs[i] = s1[i];
		for (; i < (sz1 + sz2 + 1); i++)
		{
			cs[i] = s2[j];
			j++;
		}
	}
	else
	{
		return (NULL);
	}

	return (cs);
}
