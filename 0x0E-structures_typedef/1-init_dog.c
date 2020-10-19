#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creates a dog of variable type dog
 *
 * @d: pointer to new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
