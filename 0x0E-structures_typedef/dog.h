#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct Dog - creates a structre of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: creates a dog type, that has name, owner,
 * and age values.
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
};

#endif
