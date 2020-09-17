#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function gets last digit of number and decides how big
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int n;
	int nth = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (nth > 5)
		printf("Last digit of %d is %d and is greater than 5", n, nth);
	if (nth == 0)
		printf("Last digit of %d is %d and is 0", n, nth);
	if (nth < 6 && nth != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, nth);

	printf("\n");

	return (0);
}
