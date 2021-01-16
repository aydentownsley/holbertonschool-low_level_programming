#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 * Return: None, it prints
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	hash_node_t **bin;
	unsigned long int counter = 0, flip = 1;

	if (ht == NULL)
		return;

	bin = ht->array;

	printf("{");
	for (; counter < ht->size; counter++)
	{
		if (flip == 0)
			printf(", ");
		printf("\ '%s\': \'%s\'", curr->key, curr->value);
		flip = 0;
	}
	printf("}\n");
}
