#include "hash_tables.h"

/**
 * hash_table_set - adds and element to a hash table
 *
 * @ht: hashtable to place element in
 * @key: key of element
 * @value: index of hashtable
 *
 * Return: 1 on SUCCESS
 * O on FAILURE
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int counter = 0;
	hash_node_t *new_node, *curr, **bin;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	counter = key_index((const unsigned char *)key, ht->size);
	bin = ht->array;
	for (curr = bin[counter]; curr != NULL; curr = curr->next)
	{
		if (!(strcmp(curr->key, key)))
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		free(new_node);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}
	new_node->next = bin[counter];
	bin[counter] = new_node;

	return (1);
}
