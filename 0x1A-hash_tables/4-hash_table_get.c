#include "hash_tables.h"

/**
 * hash_table_get - adds an element to the hash table
 * @ht: A pointer to the hash table.
 * @key: The key to get the value.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *now_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	now_node = ht->array[idx];
	while (now_node && strcmp(now_node->key, key) != 0)
		now_node = now_node->next;

	return ((now_node == NULL) ? NULL : now_node->value);
}
