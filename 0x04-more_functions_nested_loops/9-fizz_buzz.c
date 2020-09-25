#include <stdio.h>

/**
 * main - prints 0-99, replaces mults of 3, 5, and both with string
 *
 * Return: void
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			if (num == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d", num);
		}
		putchar(32);
	}
	putchar(10);

	return (0);
}
