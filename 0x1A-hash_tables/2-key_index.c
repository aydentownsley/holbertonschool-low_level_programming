#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 *
 * @key: key to be searched for
 * @size: size of hash table
 * Return: return the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
