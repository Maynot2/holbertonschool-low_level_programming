#include "hash_tables.h"

/**
 * key_index - Associates a given key with an index in the hash table array
 * @key: the key to be hashed
 * @size: The size of the array
 *
 * Return: The index at which the node will be stored in the hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2(key) % size;
}
