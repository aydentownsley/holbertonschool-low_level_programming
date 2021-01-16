#include "hash_tables.h"

/**
 * hash_table_get - finds value of key
 *
 * @ht: hash table
 * @key: key value
 * Return: value attached to key
 * OR NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int counter;
	hash_node_t **bin, *curr;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL)
		return (NULL);

	counter = key_index((const unsigned char *)key, ht->size);
	bin = ht->array;

	if (bin[counter] != NULL)
	{
		for (curr = bin[counter]; curr != NULL; curr = curr->next)
		{
			if (strcmp(curr->key, key) == 0)
				return (curr->value);
		}
	}
	return (NULL);
}
