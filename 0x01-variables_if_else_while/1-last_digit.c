#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function prints a number and decides size
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int nth;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nth = n % 10;

	if (nth > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nth);
	if (nth == 0)
		printf("Last digit of %d is %d and is 0\n", n, nth);
	if (nth < 6 && nth != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nth);

	return (0);
}
