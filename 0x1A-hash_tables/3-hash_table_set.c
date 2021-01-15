#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 on success
 *         0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index;
	char *v, *k;

	if (!key || !ht)
		return (0);
	v = strdup(value);
	k = strdup(key);
	index = key_index((const unsigned char *)k, ht->size);

	if (ht->array[index])
	{
		node = ht->array[index];
		while (node)
		{
			if (node->key == k)
			{
				node->value = v;
				return (1);
			}
			node = node->next;
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = k;
	node->value = v;
	if (ht->array[index])
		node->next = ht->array[index];
	else
		node->next = NULL;
	ht->array[index] = node;

	return (1);
}
