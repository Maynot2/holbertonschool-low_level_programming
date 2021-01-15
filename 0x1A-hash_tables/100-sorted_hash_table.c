#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: An unsigned long integer representing the size of the hash table.
 *
 * Return: A hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	shash_node_t **node_array = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	node_array = calloc(size, sizeof(shash_node_t *));
	if (node_array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = node_array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 on success
 *         0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL;
	unsigned long int index;
	char *v, *k;

	if (!key || !ht)
		return (0);
	v = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		node = ht->array[index];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = v;
				return (1);
			}
			node = node->next;
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	node->key = k;
	node->value = v;
	if (ht->array[index])
		node->next = ht->array[index];
	else
		node->next = NULL;
	ht->array[index] = node;

	return (1);
}

/**
 * shash_table_print - Prints tables.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;
	int print_flag = 0;

	if (ht == NULL)
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
					printf(", '%s': '%s'", node->key, node->value);
				}
				else
				{
					printf("'%s': '%s'", node->key, node->value);
					print_flag = 1;
				}
				node = node->next;
			}
		}
	}
	printf("}\n");
}

/**
 * shash_table_get - Finds an element in the hash table if present.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: The value associated to the key  on success
 *         NULL on failure
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		node = ht->array[index];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}

/**
 * shash_table_delete - Deletes the hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node = NULL, *tmp = NULL;

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
