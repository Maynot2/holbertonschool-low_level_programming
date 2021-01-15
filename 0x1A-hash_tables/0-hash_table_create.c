#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: An unsigned long integer representing the size of the hash table.
 *
 * Return: A hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **node_array = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	node_array = calloc(size, sizeof(hash_node_t *));
	if (node_array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = node_array;

	return (ht);
}
