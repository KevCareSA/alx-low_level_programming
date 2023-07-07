#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table pointer
 * Return: void, just free everything
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *now_node, *next_node;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		now_node = ht->array[idx];
		while (now_node)
		{
			next_node = now_node->next;
			free(now_node->key);
			free(now_node->value);
			free(now_node);
			now_node = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
