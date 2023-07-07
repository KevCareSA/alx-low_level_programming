#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hashtable
 * Return: void, and print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, max_idx = 0;
	hash_node_t *now_node;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		now_node = ht->array[idx];
		while (now_node)
		{
			if (max_idx++ > 0)
				printf(", ");
			printf("'%s': '%s'", now_node->key, now_node->value);
			now_node = now_node->next;
		}
	}
	printf("}\n");
}
