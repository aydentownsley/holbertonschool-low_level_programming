#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this code makes a number and tells if num is (+) (-) or zero
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	if (n == 0)
		printf("%d is zero", n);

	return (0);
}
