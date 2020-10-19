#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints value of dog struct
 *
 * @d: pointer to created dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
