#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: is a string that is the key
 * @value: value associated with the key.
 * Return: 1 if succeed it or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int idx = 0;

	if (key == NULL)
		return (0);

	if (value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *) key;
	node->value = (char *) value;
	idx = key_index((const unsigned char *) key, ht->size);
	ht->array[idx] = node;

	return (1);
}
