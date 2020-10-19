#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - creates a structre of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: creates a dog type, that has name, owner,
 * and age values.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* define type of dog_t */
typedef struct dog dog_t;

/* Prototype of init_dog */
void init_dog(struct dog *, char *, float, char *);

/* Prototype of print_dog */
void print_dog(struct dog *);

/* Prototype of new_dog */
dog_t *new_dog(char *, float, char *);

/* Prototype of free_dog */
void free_dog(dog_t *);

#endif
