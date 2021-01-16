#include "hash_tables.h"

/**
 * hash_table_delete - delete and element from hash table
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *end;
	hash_node_t **bin;
	unsigned long int counter;

	bin = ht->array;

	if (ht == NULL)
	{
		return;
	}

	for (counter = 0; counter < ht->size; counter++)
	{
		for (curr = bin[counter]; curr != NULL;)
		{
			end = curr;
			curr = curr->next;
			free(end->key);
			free(end->value);
			free(end);
		}
	}
	free(bin);
	free(ht);
}
