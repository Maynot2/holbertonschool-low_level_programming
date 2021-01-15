#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL, *tmp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (node->next == NULL)
			{
				free(node->key);
				node->key = NULL;
				free(node->value);
				node->value = NULL;
				free(node);
				node = NULL;
			}
			else
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				tmp->key = NULL;
				free(tmp->value);
				tmp->value = NULL;
				free(tmp);
				tmp = NULL;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
