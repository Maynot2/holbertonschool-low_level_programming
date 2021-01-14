#include "hash_tables.h"

/**
 * hash_table_get - Finds an element in the hash table if present.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: The value associated to the key  on success
 *         NULL on failure
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int print_flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				if (print_flag)
				{
					printf(", '%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
				}
				else
				{
					printf("'%s': '%s'", ht->array[i]->key,
							ht->array[i]->value);
					print_flag = 1;
				}
				node = node->next;
			}
		}
	}
	printf("}\n");
}
