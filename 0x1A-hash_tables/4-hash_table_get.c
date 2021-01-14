#include "hash_tables.h"

/**
 * hash_table_get - Finds an element in the hash table if present.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: The value associated to the key  on success
 *         NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		node = ht->array[index];
		while (node)
		{
			if (node->key == key)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
